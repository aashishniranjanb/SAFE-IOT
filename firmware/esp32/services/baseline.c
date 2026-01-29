#include "baseline.h"

static float slow_baseline = 0.0f;
#define ALPHA 0.995f   // slow adaptation

void baseline_init(float initial) {
    slow_baseline = initial;
}

float baseline_update(float current) {
    slow_baseline = ALPHA * slow_baseline + (1 - ALPHA) * current;
    return slow_baseline;
}
