#include "PrintCommand.hpp"
#include "SaveCommand.hpp"
#include "Invoker.hpp"

int main() {
    Invoker invoker;

    invoker.addCommand(new PrintCommand("Hello, World!"));
    invoker.addCommand(new SaveCommand("report.txt"));
    invoker.addCommand(new PrintCommand("Done."));

    invoker.run();
    return 0;
}
