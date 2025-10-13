#pragma once
#include "ICommand.hpp"
#include <string>

class SaveCommand : public ICommand {
private:
    std::string filename;

public:
    SaveCommand(const std::string& name);
    void execute() const override;
};
