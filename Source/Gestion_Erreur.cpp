//
// Created by Admin on 01/04/2022.
//

#include <iostream>
#include "Gestion_Erreur.h"
#include "limits"

// Write a program that can see if the input is a number or not

void isANumber(int nombre) {
    std::cin >> nombre;
    if (std::cin.fail()) {
        std::cout << "Erreur de saisie" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        std::cout << "Vous avez saisi : " << nombre << std::endl;
    }
}