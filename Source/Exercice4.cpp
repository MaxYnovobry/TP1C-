

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

float averageNotes(int nombre[10]){
    int somme = 0;
    for (int i = 0; i < 10; i++) {
        somme += nombre[i];
    }
    return somme / 10;
}

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




//
// Created by maxim on 01/04/2022.
//

