#pragma once

#include <stdio.h>
#include <stdbool.h>
#include "utils.h"
#include "player.h"
#include "bots.h"

#define MAX_PLAYERS 6

typedef enum {
    PREFLOP,
    FLOP,
    TURN,
    RIVER,
    SHOWDOWN,
} betting_round_t;

// Player info in the game
typedef struct {
    card_t cards[2];
    bool folded;
    bool all_in;
    int this_round_bet;
    int total_bet;
} seat_t;

typedef struct {
    int current_bet;   
    int min_raise;
    int turn;
    int players_left;
} round_t;

typedef struct {
    card_t shared_cards[5];
    seat_t seat[MAX_PLAYERS];
    int big_blind;
    int small_blind;
    int pot;
    betting_round_t round;
} hand_t;

typedef struct game_state {
    player_t players[MAX_PLAYERS];
    int dealer; // first player
    int small_blind_amount; 
    int big_blind_amount;
    hand_t* hand; // Deal in progress
} game_state_t;

// Game engine calculate who is blind by usingthe game state and post the blind
// And then let the player who is blind know

// Create a new game with a list of players
void* game_init();

// Start new hand
void* hand_init();

// Start new round
void* round_init();

// Start each game: 
// + Shuffle deck
// + Take and move the blinds
// + Randomly deal 2 private cards to each player.
// Run each betting rounds:
// + Flip the cards
// + Go around the table in order, ask each player still in for an action: fold or bet. Needs to handle the human player and bot player differently
//     Human: wait for user input
//     Bot: signal to the bot with a conditional variable, bot wakes up and answer
// + End the round and start the next round
// Reject invalid moves
// Move the chips: from the chip stack to the pot when someone bet, when game ends, give chips to the winner. Store each player's chips in some data structure
// Log human decision to a file where bots can read.
// Functions:
// GameInit: initialize a game state object which keeps track of everything.
// Some functions to run the game
// whoWins function:
// +Take a game state: know every cards
// +Calculate to see who wins
// +Return who wins or something similar