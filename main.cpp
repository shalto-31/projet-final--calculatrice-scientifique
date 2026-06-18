#include <iostream>
#include "display.h"
#include "calculSimple.h"
#include "calculAvancer.h"

int main() {
    drawMainMenu();

    int choix;
    std::cin >> choix;

    switch (choix) {
    case 1:
        test();
        break;
    case 2:
        avancer();
        break;
    case 3:
        break;
    case 4:
        return 0;
    default:
        std::cout << "choix invalide" << std::endl;
        break;
    }

    return 0;
}