# C++ Command Method

This repository demonstrates a clean implementation of the **Command** design pattern in C++ for a console-based application.

---

## Project Structure

- `ICommand.hpp` – Interface for command objects  
- `PrintCommand.hpp / PrintCommand.cpp` – Concrete command that prints data  
- `SaveCommand.hpp / SaveCommand.cpp` – Concrete command that simulates saving data  
- `Invoker.hpp / Invoker.cpp` – Executes commands and manages their invocation  
- `main.cpp` – Entry point showcasing command execution flow  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
Invoker invoker;
invoker.addCommand(new PrintCommand("Hello, World!")); // Output: [Print] Hello, World!
invoker.addCommand(new SaveCommand("report.txt")); // Output: [Save] File saved: report.txt
invoker.run();
