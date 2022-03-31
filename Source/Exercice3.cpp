//
// Created by Laurie on 31/03/2022.
//

#include <iostream>
#include "Exercice3.h"
#include "Exercice2.h"
#include <cstring>

void Exercice3(){
    std::cout << "---------- Exercice 3 --------------" << std::endl;
    int n = 0;
    strongNumber(n);
}

// Write a function that takes an input and tell if it's a strong number or not.
// A strong number is a number that is the sum of its digits, each raised to the power of the number of digits.
void strongNumber(int n){
    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> n;
    std::string result;
    std::string s = std::to_string(n);
    for (int i = 0; i <= s.length(); i++) {
        facto(s[i]);
    }
}