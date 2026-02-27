#include <iostream>

int main () {
    std::string input;
    std::cout << "Enter a string to calculate its length: " << std::endl;
    std::getline(std::cin, input);
    int l = input.length();
    std::cout << "The length of the string is: " << l << std::endl;

    return 0;
}
