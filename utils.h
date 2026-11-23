#pragma once

typedef enum {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
} suit_t;

typedef enum {
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
} rank_t;

typedef struct {
    rank_t rank;
    suit_t suit;
} card_t;

typedef enum {
    FOLD,
    RAISE,
    CHECK,
    CALL
} decision_t;
