# Welcome to My Mastermind
***

## Task
A Program called mastermind; it will be an implementation of the famous game.

## Description
Mastermind is a game composed of 9 pieces of different colors.
A secret code is then composed of 4 distinct pieces.

The player has 10 attempts to find the secret code.
After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.

Pieces will be '0' '1' '2' '3' '4' '5' '6' '7' '8'.

If the player finds the code, he wins, and the game stops.
A misplaced piece is a piece that is present in the secret code butthat is not in a good position.

You must read the player's input from the standard input.

Your program will also receive the following parameters:
-c [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
-t [ATTEMPTS]: specifies the number of attempts; by default, the playerhas 10 attempts.

## Installation
There is Installation required to execute the program only the compilation command.

## Usage
The program simulate the mastermind game that takes a set of numerical value (4 digits secretcode) and compare it with a user input to know if they match.
To play the game.
First you compile the program then it will recieve the hidden code command (for example: PROMPT>./my_mastermind -c "0123") then it will prompt the user to guess the number.
Then it begings to test if the number are the same. with the following:
When your program starts, you must display:
Will you find the secret code?
Please enter a valid guess

When the user wins, you must display:
Congratz! You did it!

When the user enters an invalid code, you must respect the following format:
Well placed pieces: X
Misplaced pieces: Y

X and Y are two digits with the correct values.

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
