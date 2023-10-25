#include <iostream>
#include <string>

std::string modifyString(const std::string& input) {
    std::string result;
    int count = 1;

    for (int i = 0; i < input.length(); i++) {
        if (i < input.length() - 1 && input[i] == input[i + 1]) {
            count++;
        } else {
            result += input[i];
            if (count > 1) {
                result += std::to_string(count);
            }
            count = 1;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string modifiedString = modifyString(input);

    std::cout << modifiedString << std::endl;

    return 0;
}

