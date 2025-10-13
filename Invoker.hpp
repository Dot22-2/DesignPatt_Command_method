#pragma once
#include "ICommand.hpp"
#include <vector>

class Invoker {
private:
    std::vector<ICommand*> queue;

public:
    void addCommand(ICommand* cmd);
    void run() const;
    ~Invoker();
};
