#include "classifier.h"

float classify(float gas_ratio, float gas_slope, float hum_grad) {
    // Simple weighted logic (V0.1)
    return 0.5f * gas_ratio + 0.3f * gas_slope + 0.2f * hum_grad;
}
