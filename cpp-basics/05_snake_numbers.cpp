#include <iostream>
#include <iomanip>

int main() {
    int height, width;
    std::cout << "Enter height: ";
    std::cin >> height;

    std::cout << "Enter width: ";
    std::cin >> width;

    int num = 1;

    for (int row = 0; row < height; row++) {
        if (row % 2 == 0) {
            for (int col = 0; col < width; col++) {
                std::cout << std::setw(3) << num++;
            }
        } else {
            int start = num + width - 1;
            for (int col = 0; col < width; col++) {
                std::cout << std::setw(3) << start - col;
            }
            num += width;
        }
        std::cout << std::endl;
    }

    return 0;
}
