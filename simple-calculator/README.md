# Simple Calculator

A simple calculator program written in C.

## Features
- Display a calculator menu
- Addition
- Subtraction
- Multiplication
- Division
- Quit using option 0

## Compilation
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 calculator.c -o calculator

## Usage
./calculator

## Number Type

The calculator uses double-precision floating-point
numbers for all arithmetic operations.

- Addition, subtraction, and multiplication support decimals.
- Division produces decimal results.
- Results are displayed using the %g format.
- Division by zero prints "Error: division by zero".
- The menu repeats until the user selects 0.
