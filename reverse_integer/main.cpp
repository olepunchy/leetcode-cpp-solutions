// NOTE:
//
// Name: Reverse Integer
// Difficulty: Easy
//
// Given a signed 32-bit integer x, return x with its digits reversed. If
// reversing x causes the value to go outside the signed 32-bit integer range
// [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or
// unsigned).
//

#include <algorithm>
#include <iostream>

int reverse(int number) {
    // Return zero if input number is zero or greater than an int32.
    if (number == 0 || number > INT_MAX || number < INT_MIN) {
        return 0;
    }

    // Track postive/negative before conversion to string.
    bool positive = number > 0;

    std::string numberString = std::to_string(number);
    std::reverse(begin(numberString), end(numberString));

    long numberLong;

    // Convert the string to a long and return 0 if the conversion
    // results in a number larger/smaller than an int32.
    if (!positive) {
        numberString.pop_back();
        numberString = "-" + numberString;
        numberLong = std::stol(numberString);

        if (numberLong < INT_MIN) {
            return 0;
        }
    } else {
        numberLong = std::stol(numberString);

        if (numberLong > INT_MAX) {
            return 0;
        }
    }

    return static_cast<int>(numberLong);
}

int main() {
    std::string inputString;
    std::cin >> inputString;

    int number = std::stoi(inputString);

    int result = reverse(number);
    std::cout << result;

    return 0;
}
