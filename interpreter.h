//
// Created by Leokud on 29.04.2024.
//

#ifndef INTERPRETER_H
#define INTERPRETER_H
#include <vector>
#include <string>
#include <iostream>
#include <map>
inline void print(int intarg)
{
    std::cout << intarg << std::endl;
}
inline std::map<std::string, int> intVar;
inline void handle(std::string line)
{
    if(line.substr(0, 6) == "print(")
    {
        std::string arg = line.substr(7, std::size(line)-2);
        int intArg{std::stoi(arg)};
        print(intArg);
    }
}


#endif //INTERPRETER_H
