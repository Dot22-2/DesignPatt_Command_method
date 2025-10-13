#include "SaveCommand.hpp"
#include <iostream>

SaveCommand::SaveCommand(const std::string& name) : filename(name) {}

void SaveCommand::execute() const {
    std::cout << "[Save] File saved: " << filename << "\n";
}
