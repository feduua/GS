#include <iostream>
#include <vector>
#include <string>
#include "interpreter.h"
int main() {
    std::vector<std::string> code;
    std::string input;
    while (std::getline(std::cin, input) && !input.empty()) {
        code.push_back(input);
    }
    for (const auto& str : code) {
        handle(str);
    }
    return 0;
}