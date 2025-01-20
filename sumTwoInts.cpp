#include <iostream>
#include <string>

int sumTwoInts (int x, int y) {
    return x + y;
}

int main () {
    int x, y;
    std::cout << "Input the first number: ";
    std::cin >> x;
    std::cout << "Input the second number: ";
    std::cin >> y;
    std::cout << "The numbers added together is: " << sumTwoInts(x,y) << "\n";
    return 0;
}