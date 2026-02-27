#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter your string to check whether it's an ice-cream sandwich:\n";
    std::cin >> input;

    int stringLength = input.length();

    if (stringLength < 3) {
        std::cout << "It is not an ice-cream sandwich.\n";
        return 0;
    }

    char edgeChar = input[0];

    int leftCount = 0;
    while (leftCount < stringLength && input[leftCount] == edgeChar) {
        leftCount++;
    }

    int rightCount = 0;
    while (rightCount < stringLength &&
           input[stringLength - 1 - rightCount] == edgeChar) {
        rightCount++;
    }

    if (leftCount != rightCount || leftCount >= stringLength - rightCount) {
        std::cout << "It is not an ice-cream sandwich.\n";
        return 0;
    }

    char middleChar = input[leftCount];

    if (middleChar == edgeChar) {
        std::cout << "It is not an ice-cream sandwich.\n";
        return 0;
    }

    for (int i = leftCount; i < stringLength - rightCount; i++) {
        if (input[i] != middleChar) {
            std::cout << "It is not an ice-cream sandwich.\n";
            return 0;
        }
    }

    std::cout << "It is an ice-cream sandwich!\n";
    return 0;
}
