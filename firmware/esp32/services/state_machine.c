#include "state_machine.h"

spoilage_state_t state_update(float p) {
    if (p < 0.3) return STATE_CLEAN;
    if (p < 0.6) return STATE_TRANSITION;
    if (p < 0.85) return STATE_EARLY_SPOILAGE;
    return STATE_SPOILAGE;
}
