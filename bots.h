#pragma once
#include "utils.h"

typedef struct result {
    int wins;
    int tie;
    int total;
} result_t;

typedef struct bot {
    int difficulty;
    result_t* result_from_simulation;
} bot_t;

// Fill a struct bot with emty values
bot_t* bot_init() {}

// Function decision handler: make decision for the  bot
decision_t bot_decision(bot_t* bot) {
    // Calculate percentage of wins (=  (wins + tie/2) / total) 
    // Calculate the percentage of contribution: bet / bet + total 
    // If probability of wins > contribution -> bet, otherwise fold
}

// A fall back if the bot cant make a proper decision
decision_t bot_decision_fallback(bot_t* bot) {}