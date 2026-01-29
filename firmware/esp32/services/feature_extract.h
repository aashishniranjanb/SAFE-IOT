#ifndef FEATURE_EXTRACT_H
#define FEATURE_EXTRACT_H

typedef struct {
    float gas_ratio;
    float gas_slope;
    float humidity_gradient;
} features_t;

void feature_update(float gas, float humidity, features_t *out);

#endif
