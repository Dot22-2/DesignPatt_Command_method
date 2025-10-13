#include "PrintCommand.hpp"
#include <iostream>

PrintCommand::PrintCommand(const std::string& msg) : message(msg) {}

void PrintCommand::execute() const {
    std::cout << "[Print] " << message << "\n";
}
