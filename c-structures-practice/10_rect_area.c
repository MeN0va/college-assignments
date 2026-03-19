#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int main(void) {
    struct Rectangle rec1, rec2;

    printf("Rectangle 1 - width: ");
    scanf("%d", &rec1.width);

    printf("Rectangle 1 - height: ");
    scanf("%d", &rec1.height);

    printf("Rectangle 2 - width: ");
    scanf("%d", &rec2.width);

    printf("Rectangle 2 - height: ");
    scanf("%d", &rec2.height);

    double area1 = rec1.width * rec1.height;
    double area2 = rec2.width * rec2.height;

    if (area1 > area2) {
        printf("Rectangle 1 is larger (area: %.2lf)\n", area1);
    } else if (area2 > area1) {
        printf("Rectangle 2 is larger (area: %.2lf)\n", area2);
    }

    return 0;
}

