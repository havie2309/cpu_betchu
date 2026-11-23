#pragma once

// Function calculate score of 5 hands. Take 5 hands, calculate the total score
int calculate5(int* hands5);

// Function calculate score from 7 cards: 2 cards + 5 cards >
// Take 7 hangs, generate combinations of 5 hands and calculate the score of each one
// Return the largest score.
int calculate7(int* hands5);