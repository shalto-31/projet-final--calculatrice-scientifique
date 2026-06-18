#include <iostream>
#include "color.h"
#include "calculSimple.h"
#include "calculAvancer.h"

int main() {

    std::cout << "bonjour que voulez vous calculer aujourd'hui ? " << std::endl;
    std::cout << "calcul de base :  1" << std::endl;
    std::cout << "calcul avancer :  2" << std::endl;
    std::cout << "calcul complex :  3" << std::endl;
    std::cout << "quitter :  4" << std::endl;

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