#include <iostream>
#include <cmath>

int power() {
    int a,b;
        std::cout << Color::MAGENTA << "vous avez choisi la puissance" << std::flush << std::endl;
        std::cout << Color::CYAN << "entrez la valeur de a : " << std::endl;
        std::cin >> a;
        std::cout << Color:: CYAN << "entrez la valeur de b : " << std::endl;
        std::cin >> b;
        fichier << "le resultat de la puissance est : " << pow(a, b) << std::endl;
        std::cout << Color::GREEN << "le resultat est : " << pow(a, b) << std::flush << std::endl;
        return 0;
};

int sqroot() {
    int c;
        std::cout << Color:: MAGENTA << "vous avez choisi la racine carrée" << std::flush << std::endl;
        std::cout << Color::CYAN << "entrez la valeur de c : " << std::endl;
        std::cin >> c;
        if (c >= 0) {
            fichier << "le resultat de la racine caree est : " << sqrt(c) << std::endl;
            std::cout << Color::GREEN << "le resultat est : " << sqrt(c) << std::flush << std::endl;
        } else {
            std::cout << Color::BOLD_RED << "erreur : racine carrée d'un nombre négatif" << std::flush << std::endl;
        }
        return 0;
};

int modulo() {
    int d,e;
        std::cout << Color::MAGENTA << "vous avez choisi le modulo" << std::endl;
        std::cout << Color::CYAN << "entrez la valeur de d : " << std::endl;
        std::cin >> d;
        std::cout << Color::CYAN << "entrez la valeur de e : " << std::endl;
        std::cin >> e;
        if (e != 0) {
            fichier << "le resultat du modulo est : " << d % e << std::endl;
            std::cout << Color::GREEN << "le resultat est : " << d % e << std::flush << std::endl;
        } else {
            std::cout << Color::BOLD_RED << "erreur : division par zéro" << std::flush << std::endl;
        }
        return 0;
};

int factorial() {
    int f;
        std::cout << "vous avez choisi la factorielle" << std::flush << std::endl;
        std::cout << "entrez la valeur de f : " << std::endl;
        std::cin >> f;
        if (f >= 0) {
            long long resultat = 1;
            for (int i = 1; i <= f; i++) {
                resultat *= i;
            }
            fichier << "le resultat de la factorielle est : " << resultat << std::endl;
            std::cout << "le resultat est : " << resultat << std::flush << std::endl;
        } else {
            std::cout << "erreur : factorielle d'un nombre négatif" << std::flush << std::endl;
        }
        return 0;
};

int avancer() {
    std::cout << "quel calcul voulez-vous effectuer ? " << std::endl;
    std::cout << "puissance :  1" << std::endl;
    std::cout << "racine carrée :  2" << std::endl;
    std::cout << "modulo :  3" << std::endl;
    std::cout << "factorielle :  4" << std::endl;
    std::cout << "retour :  5" << std::endl;

    int choix;
    std::cin >> choix;

    switch (choix) {
    case 1:
        power();
        break;
    case 2:
        sqroot();        
        break;
    case 3:
        modulo();
        break;
    case 4:
        factorial();
        break;
    case 5:
        std::cout << "vous avez choisi de revenir au menu principal" << std::endl;
        break;
    default:
        std::cout << Color::BOLD_RED << "choix invalide" << std::endl;
    }
    return 0;
};