#include <iostream>

namespace Color {
    const std::string RESET   = "\033[0m";
    const std::string BLACK   = "\033[30m";
    const std::string RED     = "\033[31m";
    const std::string GREEN   = "\033[32m";
    const std::string YELLOW  = "\033[33m";
    const std::string BLUE    = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CYAN    = "\033[36m";
    const std::string WHITE   = "\033[37m";

    // Bold variants
    const std::string BOLD_RED    = "\033[1;31m";
    const std::string BOLD_GREEN  = "\033[1;32m";
    const std::string BOLD_YELLOW = "\033[1;33m";

    // Background colors
    const std::string BG_RED   = "\033[41m";
    const std::string BG_GREEN = "\033[42m";
    const std::string BG_BLUE  = "\033[44m";
}
