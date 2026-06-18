#include <iostream>

int test(){
    std::cout << "quel calcul voulez-vous effectuer ? " << std::endl;
    std::cout << "Addition :  1" << std::endl;
    std::cout << "Soustraction :  2" << std::endl;
    std::cout << "Multiplication :  3" << std::endl;
    std::cout << "Division :  4" << std::endl;
    std::cout << "retour :  5" << std::endl;

    int choix;
    std::cin >> choix;

    switch (choix) {
    case 1:
        int a,b;
        std::cout << "vous avez choisi l'addition" << std::endl;
        std::cout << "entrez la valeur de a : " << std::endl;
        std::cin >> a;
        std::cout << "entrez la valeur de b : " << std::endl;
        std::cin >> b;
        std::cout << "le resultat est : " << a + b << std::endl;
        break;
    case 2:
        int c,d;
        std::cout << "vous avez choisi la soustraction" << std::endl;
        std::cout << "entrez la valeur de c : " << std::endl;
        std::cin >> c;
        std::cout << "entrez la valeur de d : " << std::endl;
        std::cin >> d;
        std::cout << "le resultat est : " << c - d << std::endl;
        break;
    case 3:
        int e,f;
        std::cout << "vous avez choisi la multiplication" << std::endl;
        std::cout << "entrez la valeur de e : " << std::endl;
        std::cin >> e;
        std::cout << "entrez la valeur de f : " << std::endl;
        std::cin >> f;
        std::cout << "le resultat est : " << e * f << std::endl;
        break;
    case 4:
        int g,h;
        std::cout << "vous avez choisi la division" << std::endl;
        std::cout << "entrez la valeur de g : " << std::endl;
        std::cin >> g;
        std::cout << "entrez la valeur de h : " << std::endl;
        std::cin >> h;
        if (h != 0) {
            std::cout << "le resultat est : " << g / h << std::endl;
        } else {
            std::cout << "erreur : division par zéro" << std::endl;
        }
        break;

    case 5:
        std::cout << "vous avez choisi de revenir au menu principal" << std::endl;
        break;
    default:
        std::cout << "choix invalide" << std::endl;
    }

    return 0;
}