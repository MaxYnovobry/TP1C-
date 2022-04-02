#include <iostream>
#include "../Header/Exercice1.h"
#include "../Header/Gestion_Erreur.h"

void Exercice1() {

    std::cout << "---------- Exercice 1 --------------" << std::endl;

    int n = 0;
    evenforNumber(n);
    evenwhileNumber(n);
    sommesforNumber(n);
    sommeswhileNumber(n);
}

// Write a function that needs an input and writes the number of even numbers in the input using a for and a while loop.

void evenforNumber(int n)
{
    std::cout << "Entrez un nombre : " << std::endl;
    if (n = isANumber(n)) {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    std::cout << i << " est un nombre pair" << std::endl;
                }
            }
        }
    else {
        std::cout << "Vous n'avez pas saisi un nombre" << std::endl;// Gestion des erreurs
        evenforNumber(n);
    }
}

void evenwhileNumber(int n) {
    std::cout << "Entrez un nombre : " << std::endl;
    if (n = isANumber(n)) {
        int i = 0;
        while (i < n) {
            if (i % 2 == 0) {
                std::cout << i << " est un nombre pair" << std::endl;
            }
            i++;
        }
    }
    else {
        std::cout << "Vous n'avez pas saisi un nombre positif" << std::endl;// Gestion des erreurs
        evenwhileNumber(n);
    }
}
// Write a function that needs an input and increment the number of these even numbers in the input using a for and a while loop

void sommesforNumber(int n){
    int s = 0;
    std::cout << "Entrez un nombre : " << std::endl;
    if (n = isANumber(n)) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                s = s + i;
            }
        }
        std::cout << "La somme des nombres pairs est : " << s << std::endl;
    }
    else {
        std::cout << "Vous n'avez pas saisi un nombre" << std::endl;// Gestion des erreurs
        sommesforNumber(n);
    }
}

void sommeswhileNumber(int n) {
    int i = 0;
    int s = 0;
    std::cout << "Entrez un nombre : ";
    if (n = isANumber(n)) {
        while (i < n) {
            if (i % 2 == 0) {
                s = s + i;
            }
            i++;
        }
        std::cout << "La somme des nombres pairs est : " << s << std::endl;
    }
    else {
        std::cout << "Vous n'avez pas saisi un nombre" << std::endl;// Gestion des erreurs
        sommeswhileNumber(n);
    }
}

