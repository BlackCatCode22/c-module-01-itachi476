#include <iostream>
#include <string>

int doubleint (int x) {
    return x * 2;
}

int main() {
    int x;
    std::cout << "Input a number: ";
    std::cin >> x;
    std::cout << "The number doubled is: " << doubleint(x) << "\n";
    return 0;
}