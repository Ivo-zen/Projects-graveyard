#include <iostream>
#include <string>
#include <algorithm>

bool isRearrangementPossible(long long firstNumber, long long secondNumber) {
    // Convert the two numbers to strings
    std::string first = std::to_string(firstNumber);
    std::string second = std::to_string(secondNumber);

    // Sort the digits in both strings
    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());

    // Check if the sorted strings are equal
    return first == second;
}

int main() {
    // Get input
    long long firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;

    // Check if rearrangement is possible
    if (isRearrangementPossible(firstNumber, secondNumber)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
