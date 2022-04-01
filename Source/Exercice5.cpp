//
// Created by Admin on 01/04/2022.
//

//
// Created by maxim on 01/04/2022.
//
#include <iostream>
#include "Exercice5.h"

void Exercice5(){
    std::cout << "---------- Exercice 5 --------------" << std::endl;;
    int n = 0;
    game(n);
}




//Write a game where the goal is to find a number chosen by the machine between -n and n (N being an integer)
//The user can enter a number and the program will tell the user if the number is too high or too low.
//The program will then display the number of tries it took the user to find the number.    (Hint: use a loop)
//the program will say if the user won or lost.
//The program will then ask the user if he wants to play again.
void game(int n) {

    int userNumber = 0;
    int randomNumber = 0;
    bool win = false;
    bool loose = false;
    bool playAgain = true;
    while (playAgain) {
        srand(time(NULL));
        n = (rand() % 20)  + 1;
        int tries = 1;
        randomNumber = rand() % (n * 2 + 1) - n;
        std::cout << "Entrez un nombre entre -" << n << " et " << n << " : ";
        std::cin >> userNumber;
        while (userNumber != randomNumber && tries < 10) {
            if (userNumber > randomNumber) {
                std::cout << "C'est moins" << std::endl;
                tries++;
            } else {
                std::cout << "C'est plus" << std::endl;
                tries++;
            }
            std::cout << "Entrez un nombre entre -" << n << " et " << n << " : ";
            std::cin >> userNumber;
        }
        if (tries == 10) {
            loose = true;
        }
        if (userNumber == randomNumber) {
            win = true;
        }

        if (win) {
            std::cout << "Vous avez trouve en " << tries << " coups" << std::endl;
            std::cout << "Vous avez gagne" << std::endl;
        }
        if (loose) {
            std::cout << "Vous avez utilise vos " << tries << " essaies" << std::endl;
            std::cout << "Vous avez perdu" << std::endl;
        }

        std::cout << "Voulez-vous rejouer ? (1 pour oui, 0 pour non) : ";
        std::cin >> playAgain;
    }
}