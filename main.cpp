#include <iostream>
#include <limits>
#include "display.h"
#include "calculSimple.h"
#include "calculAvancer.h"


int main() {
    clearScreen();
    drawMainMenu();

    int choix;
    std::cin >> choix;

    switch (choix) {
    case 1:
        basicCalculMenu();
        break;
    case 2:
        avancer();
        break;
    case 3:
        std::cout << "quitter" << std::endl;
        return 0;
        break;
    default:
        std::cout << Color::BOLD_RED << "choix invalide" << std::flush << std::endl;
        break;
    }

    return 0;
}