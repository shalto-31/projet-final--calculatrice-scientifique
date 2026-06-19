#pragma once
#include <iostream>

namespace Color {
    const std::string RESET   = "\033[0m";
    const std::string BLACK   = "\033[30m";
    const std::string RED     = "\033[31m";//errors
    const std::string GREEN   = "\033[32m";//results
    const std::string YELLOW  = "\033[33m";
    const std::string BLUE    = "\033[34m";//
    const std::string MAGENTA = "\033[35m";// menus
    const std::string CYAN    = "\033[36m";// edit
    const std::string WHITE   = "\033[37m";

    // Bold variants
    const std::string BOLD_RED    = "\033[1;31m";
    const std::string BOLD_GREEN  = "\033[1;32m";//keep
    const std::string BOLD_YELLOW = "\033[1;33m";

    // Background colors
    const std::string BG_RED   = "\033[41m";
    const std::string BG_GREEN = "\033[42m";
    const std::string BG_BLUE  = "\033[44m";//keep
}

void clearScreen() {
    std::cout << "\033[2J\033[H";
}

void drawMainMenu() {
    clearScreen();
    std::cout << Color::MAGENTA << "╔═════════════════════╗\n";
    std::cout << Color::MAGENTA << "║    CALCULATOR       ║\n";
    std::cout << Color::MAGENTA << "╠═════════════════════╣\n";
    std::cout << Color::MAGENTA << "║  1. Basic           ║\n";
    std::cout << Color::MAGENTA << "║  2. Avance          ║\n";
    std::cout << Color::MAGENTA << "║  3. Quitter         ║\n";
    std::cout << Color::MAGENTA << "╚═════════════════════╝\n";
    std::cout << Color::MAGENTA << "Choose: "<< std::flush;
}

void drawBasicMenu() {
    clearScreen();
    std::cout << Color::MAGENTA << "╔═════════════════════════╗\n";
    std::cout << Color::MAGENTA << "║  BASIC CALC             ║\n";
    std::cout << Color::MAGENTA << "╠═════════════════════════╣\n";
    std::cout << Color::MAGENTA << "║  1. Addidtion           ║\n";
    std::cout << Color::MAGENTA << "║  2. Soustraction        ║\n";
    std::cout << Color::MAGENTA << "║  3. Multiplication      ║\n";
    std::cout << Color::MAGENTA << "║  4. Division            ║\n";
    std::cout << Color::MAGENTA << "║  5. retour              ║\n";
    std::cout << Color::MAGENTA << "╚═════════════════════════╝\n";
    std::cout << Color::MAGENTA << "Choose: "<< std::flush;
}
