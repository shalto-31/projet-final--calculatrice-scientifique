#include <iostream>
#include "display.h"

int basicCalculMenu(){
    drawBasicMenu();

    int choix;
    std::cin >> choix;

    switch (choix) {
    case 1:
        int a,b;
        std::cout << "vous avez choisi l'addition" << std::endl;
        std::cout << Color:: CYAN << "entrez la valeur de a : " << std::endl;
        std::cin >> a;
        std::cout << Color::CYAN << "entrez la valeur de b : " << std::endl;
        std::cin >> b;
        std::cout << Color:: GREEN << "le resultat est : " << a + b << std::endl;
        
        break;
    case 2:
        int c,d;
        std::cout << "vous avez choisi la soustraction" << std::endl;
        std::cout << Color:: CYAN  << "entrez la valeur de c : " << std::endl;
        std::cin >> c;
        std::cout << Color:: CYAN  << "entrez la valeur de d : " << std::endl;
        std::cin >> d;
        std::cout << Color::GREEN << "le resultat est : " << c - d << std::endl;
        break;
    case 3:
        int e,f;
        std::cout << "vous avez choisi la multiplication" << std::endl;
        std::cout << Color:: CYAN  << "entrez la valeur de e : " << std::endl;
        std::cin >> e;
        std::cout << Color:: CYAN << "entrez la valeur de f : " << std::endl;
        std::cin >> f;
        std::cout << Color::GREEN << "le resultat est : " << e * f << std::endl;
        break;
    case 4:
        int g,h;
        std::cout << "vous avez choisi la division" << std::endl;
        std::cout << Color:: CYAN << "entrez la valeur de g : " << std::endl;
        std::cin >> g;
        std::cout << Color:: CYAN  << "entrez la valeur de h : " << std::endl;
        std::cin >> h;
        if (h != 0) {
            std::cout << Color::GREEN << "le resultat est : " << g / h << std::endl;
        } else {
            std::cout << Color::RED << "erreur : division par zéro" << std::endl;
        }
        break;
    case 6:
        std::cout << Color::MAGENTA << "retour au menu principal" << std::endl;
        break;
    default:
        std::cout << Color::RED << "choix invalide" << std::endl;
    }

    return 0;
}
