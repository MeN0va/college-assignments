#include <iostream>

int main() {
    double sum;  // use double in case someone buys something with cents
    std::cout << "What is the sum of your shopping?: ";
    std::cin >> sum;

    if (sum > 1000) {
        double discount = (sum * 5) / 100.0; // 5% discount
        sum = sum - discount;
        std::cout << "You got 5% discount! Amount left to pay: " << sum << std::endl;
    } else if (sum > 500) {
        double discount = (sum * 3) / 100.0; // 3% discount
        sum = sum - discount;
        std::cout << "You got 3% discount! Amount left to pay: " << sum << std::endl;
    } else {
        std::cout << "You have no discount, congratulations! :3" << std::endl;
    }

    return 0;
}
