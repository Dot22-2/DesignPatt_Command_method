#pragma once
#include "ICommand.hpp"
#include <string>

class PrintCommand : public ICommand {
private:
    std::string message;

public:
    PrintCommand(const std::string& msg);
    void execute() const override;
};
