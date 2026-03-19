#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int main(void) {
    struct Rectangle rec1;

    printf("Enter width: ");
    scanf("%d", &rec1.width);

    printf("Enter height:");
    scanf("%d", &rec1.height);

    double area = rec1.width * rec1.height;
    double perimeter = (2 * rec1.width) + (2 * rec1.height);

    printf("Area: %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);

    return 0;
}

