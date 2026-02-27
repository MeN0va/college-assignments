#include <iostream>

int main() {
    int number;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> number;

    std::string number_as_string = std::to_string(number);

    std::cout << "The output is: " << number_as_string << std::endl;

    return 0;
}
