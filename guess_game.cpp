// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is a number guessing game


#include <iostream>


int main() {
    // This function checks if your guess is correct

    const int ANSWER = 5;
    int guess_number;

    std::cout << "Enter a number as your guess (1-9): ";
    std::cin >> guess_number;

    if (guess_number == ANSWER) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed incorrectly." << std::endl;
    }

    std::cout << "The correct answer is " << ANSWER << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
