#include <iostream>

bool IsPerectSquare(int num) {
    if (num == 0) {
        return false;
    }

    long squareRoot = 0;

    while (squareRoot * squareRoot < num) {
        squareRoot++;
    }

    if (squareRoot * squareRoot != num) {
        --squareRoot;
    }

    int result = static_cast<int>(squareRoot * squareRoot);

    return result == num;
}

int main() {
    int first = 16;
    int second = 32;
    int third = 91;
    int fourth = 25;
    int fifth = 200;

    bool firstResult = IsPerectSquare(first);
    bool secondResult = IsPerectSquare(second);
    bool thirdResult = IsPerectSquare(third);
    bool fourthResult = IsPerectSquare(fourth);
    bool fifthResult = IsPerectSquare(fifth);

    std::cout << first << firstResult << "\n";
    std::cout << second << secondResult << "\n";
    std::cout << third << thirdResult << "\n";
    std::cout << fourth << fourthResult << "\n";
    std::cout << fifth << fifthResult << "\n";

    return 0;
}
