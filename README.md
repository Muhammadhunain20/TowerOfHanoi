# TowerOfHanoi
# Tower of Hanoi Solver in C++

This C++ program solves the Tower of Hanoi problem using recursion. The Tower of Hanoi is a classical problem that involves moving a number of disks from one rod to another, subject to the constraints that only one disk can be moved at a time and no disk can be placed on top of a smaller disk.

## Table of Contents
- [Overview](#overview)
- [How it Works](#how-it-works)
- [Getting Started](#getting-started)
- [Contributor](#contributor)
- [License](#license)

## Overview
The program takes the number of disks as input and demonstrates the step-by-step moves required to solve the Tower of Hanoi problem. Additionally, it outputs the total number of moves made during the process.

## How it Works
The program uses a recursive approach to solve the Tower of Hanoi problem. It follows these steps:
1. If there is only one disk, move it directly from the source rod to the destination rod.
2. Move (n-1) disks from the source rod to a temporary rod.
3. Move the nth disk from the source rod to the destination rod.
4. Move (n-1) disks from the temporary rod to the destination rod.

## Getting Started
1. Clone or download the C++ program files to your local machine.
2. Open a terminal or command prompt and navigate to the project directory.
3. Compile the program using a C++ compiler.
   ```bash
   g++ tower_of_hanoi.cpp -o tower_of_hanoi
