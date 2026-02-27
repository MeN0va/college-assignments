#include <iostream>
#include <cmath>

int main() {
    const double g = 9.8;
    double v, angleDeg, angleRad, length;

    std::cout << "Enter velocity (m/s): " << std::endl;
    std::cin >> v;

    std::cout << "Enter launch angle (degrees): " << std::endl;
    std::cin >> angleDeg;

    angleRad = angleDeg * M_PI / 180.0;

    length = (v * v) * std::sin(2 * angleRad) / g;

    std::cout << "The projectile will travel: " << length << " meters" << std::endl;

    return 0;
}
