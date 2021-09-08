// Name: Palindrome Number
// Difficulty: Easy
//
// Description:
// Given an integer x, return true if x is palindrome integer.
//
// An integer is a palindrome when it reads the same backward as forward. For
// example, 121 is palindrome while 123 is not.
//

#include <algorithm>
#include <iostream>
#include <string>

int GetInput() {
	std::string input;
	std::cin >> input;
	return std::stoi(input);
}

std::string GetNumberAsReversedString(int number) {
	bool positive = number > 0;

	std::string numberString = std::to_string(number);

	if (!positive) {
		std::reverse(begin(numberString), end(numberString));
		numberString.pop_back();
		numberString = "-" + numberString;
	} else {
		std::reverse(begin(numberString), end(numberString));
	}

	return numberString;
}

bool IsNumberPalindrome(std::string first, std::string second) {
	return first == second;
}

int main() {
	int number = GetInput();

	std::string numberString = std::to_string(number);
	std::string reversedNumberString = GetNumberAsReversedString(number);

	bool palindromeNumber =
	    IsNumberPalindrome(numberString, reversedNumberString);

	std::string message = palindromeNumber
	                          ? numberString + " is a palindrome number"
	                          : numberString + " is NOT a palindrome number";

	std::cout << message << "\n";

	return 0;
}
