// Copyright (c) 2022 Emmanuel Fofeyin All rights reserved

// Created by: Emmanuel Fofeyin
// Created on: Dec 2022
// This program finds the perimeter of a octagon

#include <iostream>

int PerimeterCalculation(int length) {
    // This function finds the perimeter of a octagon
    float perimeter;

    // Process
    if (length < 0)
        perimeter = -1;
        return perimeter;
    else
        perimeter = length * 8;

    return perimeter;
}

int main() {
    // This function gets the length from the user
    std::string length_as_string;
    int length_as_int;
    int perimeter;

    // Input
    std::cout << "Enter the length of one of the pentagons sides (cm): ";
    std::cin >> length_as_string;

    try {
        length_as_int = std::stoi(length_as_string);
        // Call function
        perimeter = PerimeterCalculation(length_as_int);
        if (perimeter == -1)
            std::cout << "\nPlease enter a positive number.";
        else
            std::cout << "\nThe perimeter of a octagon with the length of "
                      << length_as_int << " cm is " << perimeter << " cm.";
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}