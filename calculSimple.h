#include <iostream>
#include <fstream>

int basicCalculMenu(){
    std::ofstream fichier("donnees.txt");
    if (!fichier) {
        std::cout << "Erreur d'ouverture du fichier.\n";
        return 1;
    }
    clearScreen();
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
        fichier << "le resultat de l'addition est : " << a + b << std::endl;
        std::cout << Color:: GREEN << "le resultat est : " << a + b << std::flush << std::endl;
        
        break;
    case 2:
        int c,d;
        std::cout << "vous avez choisi la soustraction" << std::endl;
        std::cout << Color:: CYAN  << "entrez la valeur de c : " << std::endl;
        std::cin >> c;
        std::cout << Color:: CYAN  << "entrez la valeur de d : " << std::endl;
        std::cin >> d;
        fichier << "le resultat de l'addition est : " << c - d << std::endl;
        std::cout << Color::GREEN << "le resultat est : " << c - d << std::flush << std::endl;
        break;
    case 3:
        int e,f;
        std::cout << "vous avez choisi la multiplication" << std::endl;
        std::cout << Color:: CYAN  << "entrez la valeur de e : " << std::endl;
        std::cin >> e;
        std::cout << Color:: CYAN << "entrez la valeur de f : " << std::endl;
        std::cin >> f;
        fichier << "le resultat de l'addition est : " << e * f << std::endl;
        std::cout << Color::GREEN << "le resultat est : " << e * f << std::flush << std::endl;
        break;
    case 4:
        int g,h;
        std::cout << "vous avez choisi la division" << std::endl;
        std::cout << Color:: CYAN << "entrez la valeur de g : " << std::endl;
        std::cin >> g;
        std::cout << Color:: CYAN  << "entrez la valeur de h : " << std::endl;
        std::cin >> h;
        if (h != 0) {
            fichier << "le resultat de l'addition est : " << g + h << std::endl;
            std::cout << Color::GREEN << "le resultat est : " << g / h << std::flush << std::endl;
        } else {
            std::cout << Color::BOLD_RED << "erreur : division par zéro" << std::flush << std::endl;
        }
        break;
    case 6:
        std::cout << Color::MAGENTA << "retour au menu principal" << std::endl;
        break;
    default:
        std::cout << Color::RED << "choix invalide" << std::flush << std::endl;
    }

    return 0;
}
