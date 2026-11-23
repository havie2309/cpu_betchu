#pragma once

#include "bots.h"

typedef struct {
    int id;
    int chips;
    bool is_human;
    bot_t* bot;            // NULL for the human (replaces void* something)
} player_t;