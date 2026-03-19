#include <stdio.h>
#include <string.h>

struct Product {
    char name[30];
    double price;
    int quantity;
};

int main(void) {
    struct Product product1;

    printf("Enter the name of the product: ");
    fgets(product1.name, sizeof(product1.name), stdin);
    product1.name[strcspn(product1.name, "\n")] = '\0';

    printf("Enter the price of the product: ");
    scanf("%lf", &product1.price);

    printf("Enter the quantity of the product: ");
    scanf("%d", &product1.quantity);

    double total = product1.price * product1.quantity;
    printf("Total: %.2lf UAH\n", total);

    return 0;
}

