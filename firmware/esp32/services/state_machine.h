#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

typedef enum {
    STATE_CLEAN,
    STATE_TRANSITION,
    STATE_EARLY_SPOILAGE,
    STATE_SPOILAGE
} spoilage_state_t;

spoilage_state_t state_update(float probability);

#endif
