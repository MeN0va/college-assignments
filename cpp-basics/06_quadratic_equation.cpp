#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter a: " << std::endl;
    std::cin >> a;

    std::cout << "Enter b: " << std::endl;
    std::cin >> b;

    std::cout << "Enter c: " << std::endl;
    std::cin >> c;

    if (a == 0) {
        std::cout << "This is not a quadratic equation." << std::endl;
        return 0;
    }

    std::cout << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;

    double discriminant = (b * b) - (4 * a * c);
    std::cout << "Discriminant = " << discriminant << std::endl;

    if (discriminant < 0) {
        std::cout << "The discriminant is negative, so the equation has no real solutions." << std::endl;
    } else if (discriminant == 0) {
        double x = -b / (2.0 * a);
        std::cout << "One real solution: x = " << x << std::endl;
    } else {
        double x1 = (-b + std::sqrt(discriminant)) / (2.0 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2.0 * a);
        std::cout << "Two real solutions: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }

    return 0;
}
