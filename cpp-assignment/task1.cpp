#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int sum = 0;
    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    std::cout << "Sum of even numbers from " << num1 << " to " << num2 << " = " << sum << std::endl;
    return 0;
}
