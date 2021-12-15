// Copyright (c) 2021 ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle kaze
// Created on: Dec 14,  2021
// This program asks the user to guess a
// number and if they get it wrong they are told so

#include <iostream>
#include <random>

int main() {
    // Generates random number
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    someRandomNumber = idist(rgen);
    // std::cout << someRandomNumber << std::endl;
    // local variable
    std::string numberAsString;
    int numberAsInt;

    // gets input from user
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // try catch
    try {
        // Casts the user's input from a string to an integer
        numberAsInt = std::stoi(numberAsString);
        // check if the guess is correct
        if (numberAsInt == someRandomNumber) {
            // Prints if they got it right
            std::cout << "Your guess is correct!";
            std::cout << "" << std::endl;
            std::cout << "Thanks for Playing.";
        } else {
            std::cout << "Your guess is wrong, the correct number is "
                      << someRandomNumber << "\n";
            std::cout << "" << std::endl;
            std::cout << "Thanks for Playing.";
    }

        // Tells if the user did not enter an integer
    } catch (std::invalid_argument) {
        std::cout <<"What you entered is not an integer.\n";
        std::cout << "" << std::endl;
        std::cout << "Thanks for Playing.";
    }
}

