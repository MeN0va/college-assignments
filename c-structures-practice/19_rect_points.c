#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

struct Rectangle {
    struct Point bottomLeft;
    struct Point topRight;
};

int main(void) {
    struct Rectangle rec1;

    printf("Bottom-left - x: ");
    scanf("%d", &rec1.bottomLeft.x);
    printf("Bottom-left - y: ");
    scanf("%d", &rec1.bottomLeft.y);
    printf("Top-right - x: ");
    scanf("%d", &rec1.topRight.x);
    printf("Top-right - y: ");
    scanf("%d", &rec1.topRight.y);

    double area = abs(rec1.topRight.x - rec1.bottomLeft.x) * abs(rec1.topRight.y - rec1.bottomLeft.y);

    printf("Area: %.2lf\n", area);

    return 0;
}
