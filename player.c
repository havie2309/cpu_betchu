#include "player.h";
#include <stdbool.h>

bool is_active(player_t player) {
    return player.chips > 0;
}