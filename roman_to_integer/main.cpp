// 13. Roman to Integer
// Easy

// 1743

// 132

// Add to List

// Share
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D
// and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two one's added
// together. 12 is written as XII, which is simply X + II. The number 27 is
// written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right.
// However, the numeral for four is not IIII. Instead, the number four is
// written as IV. Because the one is before the five we subtract it making four.
// The same principle applies to the number nine, which is written as IX. There
// are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Solution {

private:
  map<char, int> romanNumerals = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                  {'C', 100}, {'D', 500}, {'M', 1000}};

public:
  int romanToInt(std::string input) {

    int result = 0;

    for (int index = 0; index < input.size(); index++) {
      char thisChar = input[index];

      int currentValue = romanNumerals.find(thisChar)->second;
      int nextValue = 0;

      if (index + 1 < input.size()) {
        char nextChar = input[index + 1];
        nextValue = romanNumerals.find(nextChar)->second;
      }

      if (currentValue < nextValue) {
        result += (nextValue - currentValue);
        // Skip ahead since we used the next value
        index++;
      } else {
        result += currentValue;
      }
    }

    return result;
  }
};

int main() {

  std::string romanNumber;
  getline(std::cin, romanNumber);

  Solution solution;
  int result = solution.romanToInt(romanNumber);

  std::cout << result << "\n";

  return 0;
}
