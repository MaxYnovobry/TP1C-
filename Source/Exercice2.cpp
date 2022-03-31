#include <iostream>
#include "../Header/Exercice2.h"

void Exercice2() {

    std::cout << "---------- Exercice 2 --------------" << std::endl;
    int n = 0;
    facto(n);
}

// Write a function that take an intput and return a factoriel of that input

void facto(int n)
{
    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> n;
    int s = 1 ;
    for (int i = 1 ; i <= n ; i++){
        s = s * i;
    }
    std::cout << "factoriel de " << n << "=" << s << std::endl;
}




//
// Created by max on 31/03/2022.
//

