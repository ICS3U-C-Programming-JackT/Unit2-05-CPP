// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 16, 2025
// This program explains the differences between global and local variables

#include <iostream>

// global variable
int variableX = 20;

void localVariable() {
    // This shows how local variables work
    int variableX = 5;
    int variableY = 25;
    int variableZ;

    variableX = variableX + 2;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // This shows how global variables work
    int variableY = 25;
    int variableZ;

    variableX = variableX + 2;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // Fire functions to display and explain the differences
    localVariable();
    globalVariable();
}
