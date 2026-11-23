#pragma once

// Module for scheduling: knows bots' difficulty

// Function Distribute ticket based on difficulty
// Function match bots with worker

// Scheduling: each bots receive ticket based on it's difficulty -> scheduler randomly select a ticket to match with a worker when the worker is free. 
// All bots "think" while the human is making decision, after that, all bots stop thinking and give decisions in turn (timeout 0.001s)

// Worker threads: take the bot's info
// Needs to ask for CPU time to run simulations (CPU gives out time to bots with a scheduler)
// Generate random simulations: 
// + Guess the opponent's card & the unfliped cards by selecting randomly from the cards that are not on the table
// Call whoWins() to see if it wins
// Count the wins & the simulations
// Return the results, save in bot's data struture