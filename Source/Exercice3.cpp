//
// Created by Laurie on 31/03/2022.
//

#include <iostream>
#include "../Header/Exercice3.h"
#include <cstring>

void Exercice3(){
    std::cout << "---------- Exercice 3 --------------" << std::endl;
    int n = 0;
}

// Write a function that takes an input and tell if it's a strong number or not.

void strongNumber(int n){
    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> n;
    std::string result;
    std::string s = std::to_string(n);
    for (int i = 0; i <= s.length(); i++) {
        int nb = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                nb++;
            }
        }
        if (nb == 1) {
            result += s[i];
        }
    }
}