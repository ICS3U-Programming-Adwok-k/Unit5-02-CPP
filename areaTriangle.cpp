// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: May 18th, 2025
// This program calculates the area of a triangle.
#include <iostream>
#include <string>

void CalcArea(float base, float height) {
    float area = base * height / 2.0;
    std::cout << "The area of the triangle is: " << area << std::endl;
}

int main() {
    std::string baseInputStr;
    std::string heightInputStr;

    // Ask the user for height as a string
    std::cout << "Enter the height of the triangle: ";
    std::cin >> heightInputStr;
    // Ask the user for base as a string
    std::cout << "Enter the base of the triangle: ";
    std::cin >> baseInputStr;

    try {
        // Convert the user height to a float
        heightInput = std::stof(heightInputStr);
        // Convert the user base to a float
        baseInput = std::stof(baseInputStr);

        if (baseInput <= 0 && heightInput <= 0) {
            /*if base is less than 0 and height is less than 0,
            tell the user the base and height ust be positive.*/
            std::cout << "Your base and height must be"
            " positive numbers." << std::endl;
        } else if (heightInput <= 0) {
            /*if height is less than or equal to 0, tell the user the
            height must be a positive number.*/
            std::cout << heightInput << " must be a positive number.\n"
            "The height should always be positive." << std::endl;
        } else if (baseInput <= 0) {
            // Call the calc_area function if the user enters valid input.
            std::cout << baseInput << " must be a positive number.\n"
            "The base should always be positive." << std::endl;
        } else {
            CalcArea(baseInput, heightInput);
        }
    } catch (std::invalid_argument const&) {
        // let the user know the input given is invalid
        std::cout << "This is an invalid number." << std::endl;
    }
    // Thank the user for participating
    std::cout << "Thank you for participating." << std::endl;
}
