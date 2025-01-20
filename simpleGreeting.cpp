#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Input your name: ";
    std::getline(std::cin, name);
    std::cout << "Welcome, " << name << "!\n";
    std::cout << "We are happy to see you again!\n";
    return 0;
}