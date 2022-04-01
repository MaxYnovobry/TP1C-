//
// Created by Laurie on 31/03/2022.
//

#include <iostream>
#include "Exercice3.h"
#include "Exercice2.h"


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
    int result  = 0;
    std::string s = std::to_string(n);
    for (int i = 0; i <= (s.length()-1); i++) {
        facto(s[i]-48); // -48 TO CONVERT CHART TO INT
            result = result + facto(s[i]-48);
            std::cout << "La factorielle de " << s[i] << " est :" << facto(s[i]-48) << std::endl;

    }
    std::cout << "La somme des factorisation est de " << result << std::endl;
    if (result == n) {
        std::cout << "Le nombre " << n << " est un nombre fort." << std::endl;
    } else {
        std::cout << "Le nombre " << n << " n'est pas un nombre fort." << std::endl;
    }
}