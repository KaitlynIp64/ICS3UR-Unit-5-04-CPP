// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Dec 2022
// This program is calculates the volume of a cylinder

#include <cmath>
#include <iostream>
#include <string>

double CalculateVolume(int radius, int height) {
    double volume;

    // calculate volume
    volume = round(M_PI * pow(radius, 2) * height * 100) / 100;
    return volume;
}

int main() {
    std::string strRadius;
    std::string strHeight;
    int radius;
    int height;
    double totalVolume;

    // input
    std::cout << "Enter length of radius (cm): ";
    std::cin >> strRadius;
    std::cout << "Enter length of height (cm): ";
    std::cin >> strHeight;

    // process and output
    try {
        radius = std::stoi(strRadius);
        height = std::stoi(strHeight);
        // call functions
        totalVolume = CalculateVolume(radius, height);
        std::cout << "The volume of a cylinder with a radius of "
        << radius << "cm and a height of " << height << "cm is "
        << totalVolume << "cm³.";
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
