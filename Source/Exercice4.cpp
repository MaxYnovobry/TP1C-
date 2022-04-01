

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Exercice4.h"


void Exercice4(){
    std::cout << "---------- Exercice 4 --------------" << std::endl;;
    int note = 0;
    notation(note);
}

// Write a program that demands to the user to enter 10 notes and then displays their average, as well as the minimum and maximum notes.

// Write a program that asks the user to enter a number and then displays the average of the digits of the number.


void notation(int note){
    std::vector<float> listNotes;
    for (int i = 1; i <= 10; i++) {
        std::cout << "Entrez la note n" << i << " entre 0 et 20 : ";
        std::cin >> note;
        if (note < 0 || note > 20) {
            std::cout << "Veuillez entrer une note entre 0 et 20" << std::endl;
            i--;
        } else {
            listNotes.push_back(note);
        }

    }
    float average = accumulate( listNotes.begin(), listNotes.end(), 0.0/ listNotes.size());
    average = average/10;
    std::cout << "La note minimale est de " << *min_element(listNotes.begin(), listNotes.end()) << std::endl;
    std::cout << "La note maximale est de " << *max_element(listNotes.begin(), listNotes.end()) << std::endl;
    std::cout << "La moyenne des notes est de " << average << std::endl;
}



//Write a game where the goal is to find a number chosen by the machine between a n number chosen by the machine n and -n (n is an integer). The user can enter a number and the program will tell the user if the number is too high or too low.
//The program will then display the number of tries it took the user to find the number.    (Hint: use a loop)
//the program will say if the user won or lost.
//The program will then ask the user if he wants to play again.

void game(){
    int n = 0;
    n = rand() % 10;
    int nb = 0;
    int nbTries = 0;
    std::cout << "Entrez un nombre entre -10 et 10 : ";
    std::cin >> n;
    while (n != nb) {
        nbTries++;
        std::cout << "Entrez un nombre entre -10 et 10 : ";
        std::cin >> n;
        if (n > nb) {
            std::cout << "C'est moins" << std::endl;
        } else if (n < nb) {
            std::cout << "C'est plus" << std::endl;
        }
    }
}
//
// Created by maxim on 01/04/2022.
//

