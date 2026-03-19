#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

int main(void) {
    struct Complex complex1, complex2;

    printf("Complex 1 - real: ");
    scanf("%d", &complex1.real);

    printf("Complex 1 - imag: ");
    scanf("%d", &complex1.imag);

    printf("Complex 2 - real: ");
    scanf("%d", &complex2.real);

    printf("Complex 2 - imag: ");
    scanf("%d", &complex2.imag);

    int r = complex1.real + complex2.real;
    int i = complex1.imag + complex2.imag;

    printf("Sum: %d + %di\n", r, i);

    return 0;
}

