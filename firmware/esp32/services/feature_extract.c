#include "feature_extract.h"

static float prev_gas = 0;
static float prev_hum = 0;

void feature_update(float gas, float humidity, features_t *out) {
    out->gas_ratio = gas;                  // placeholder
    out->gas_slope = gas - prev_gas;
    out->humidity_gradient = humidity - prev_hum;

    prev_gas = gas;
    prev_hum = humidity;
}
