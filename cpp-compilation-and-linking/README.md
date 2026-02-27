# C++ Compilation & Linking — Number Guess Game

A C++ example demonstrating separate compilation and linking. 
Small number-guessing game split across two source files to show how `.cpp` → `.o` → executable works.

## Project overview

- **Goal:** Show how to split a C++ program into multiple files, compile each file to an object file, and link them into a single executable.
- **Program:** A simple number-guessing game. The user chooses a number 1–6; the program generates a random number and reports a win/loss/draw. The logic for comparing the numbers is implemented in game_logic.cpp, while user interaction and the program loop are handled in main.cpp. The game supports multiple rounds and keeps a score summary.

## How to compile and run

```bash
g++ -c main.cpp
g++ -c game_logic.cpp
g++ main.o game_logic.o -o guessgame
./guessgame
