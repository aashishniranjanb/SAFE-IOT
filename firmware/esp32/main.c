#include "drivers/bme680_driver.h"
#include "services/baseline.h"
#include "services/feature_extract.h"
#include "services/state_machine.h"
#include "ml/classifier.h"
#include "system/config.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    bme680_data_t data;
    features_t features;

    bme680_init();
    bme680_read(&data);
    baseline_init(data.gas_resistance);

    while (1) {
        bme680_read(&data);

        float baseline = baseline_update(data.gas_resistance);
        feature_update(data.gas_resistance / baseline,
                       data.humidity,
                       &features);

        float p = classify(features.gas_ratio,
                           features.gas_slope,
                           features.humidity_gradient);

        spoilage_state_t state = state_update(p);

        // TODO: send telemetry

        vTaskDelay(pdMS_TO_TICKS(SAMPLE_INTERVAL_MS));
    }
}
