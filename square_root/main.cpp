#include <iostream>

int SquareRoot(int x) {
    if (x == 0) {
        return 0;
    }

    long squareRoot = 0;

    while (squareRoot * squareRoot < x) {
        squareRoot++;
    }

    if (squareRoot * squareRoot != x) {
        --squareRoot;
    }

    return static_cast<int>(squareRoot);
}

int main() {
    int number = 46341;

    int result = SquareRoot(number);

    std::cout << "The square root of " << number << " is, " << result << "\n";

    return 0;
}
