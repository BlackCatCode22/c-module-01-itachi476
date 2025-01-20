#include <iostream>
#include <string>

int tripleInt (int x) {
    return x * 3;
}

int main() {
    int x;
    std::cout << "Input a number: ";
    std::cin >> x;
    std::cout << "The number tripled is: " << tripleInt(x) << "\n";
    return 0;
}