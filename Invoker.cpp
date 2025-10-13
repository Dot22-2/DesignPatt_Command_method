#include "Invoker.hpp"

void Invoker::addCommand(ICommand* cmd) {
    queue.push_back(cmd);
}

void Invoker::run() const {
    for (const auto& cmd : queue)
        cmd->execute();
}

Invoker::~Invoker() {
    for (auto& cmd : queue)
        delete cmd;
}
