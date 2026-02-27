#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i += 2) {
        int spaces = (n - i) / 2;
        for (int s = 0; s < spaces; s++)
            std::cout << "  ";

        for (int star = 0; star < i; star++) {
            std::cout << "*";
            if (star < i - 1)
                std::cout << " ";
        }

        std::cout << std::endl;
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        int spaces = (n - i) / 2;
        for (int s = 0; s < spaces; s++)
            std::cout << "  ";

        for (int star = 0; star < i; star++) {
            std::cout << "*";
            if (star < i - 1)
                std::cout << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
