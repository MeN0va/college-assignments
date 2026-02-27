#include <iostream>
#include <iomanip>

int main() {
    int length, width;
    char ch = '*';

    std::cout << "Enter the length of the rectangle: " << std::endl;
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: " << std::endl;
    std::cin >> width;

    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "The result: " << std::endl;

    for (int w = 0; w < width; w++) {
        for (int l = 0; l < length; l++) {
            std::cout << std::setw(3) << ch;
        }
        std::cout << std::endl;
    }

    return 0;
}
