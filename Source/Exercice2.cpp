#include <iostream>
#include "Exercice2.h"
#include "Gestion_Erreur.h"

void Exercice2() {

    std::cout << "---------- Exercice 2 --------------" << std::endl;
    std::cout << "Entrez un nombre : " << std::endl;
    int n = 0;
    if (n = isANumber(n)) {
        std::cout << "La factorielle de " << n << " est "<< facto(n) << std::endl;
    }
    else {
        Exercice2();
    }
}

// Write a function that take an input and return a factoriel of that input

int facto(int n)
{
    int s = 1 ;
    for (int i = 1 ; i <= n ; i++){
        s = s * i;
    }
    return s;

}




//
// Created by max on 31/03/2022.
//

