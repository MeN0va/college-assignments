#include <stdio.h>
#include <string.h>

struct Product {
    char name [20];
    double price;
    int quantity;
};

int main(void) {
    struct Product product1, product2, product3;

    printf("Product 1 - name: ");
    fgets(product1.name, 20, stdin);
    product1.name[strcspn(product1.name, "\n")] = '\0';
    printf("Product 1 - price: ");
    scanf("%lf", &product1.price);
    printf("Product 1 - quantity: ");
    scanf("%d", &product1.quantity);

    getchar();

    printf("Product 2 - name: ");
    fgets(product2.name, 20, stdin);
    product2.name[strcspn(product2.name, "\n")] = '\0';
    printf("Product 2 - price: ");
    scanf("%lf", &product2.price);
    printf("Product 2 - quantity: ");
    scanf("%d", &product2.quantity);

    getchar();

    printf("Product 3 - name: ");
    fgets(product3.name, 20, stdin);
    product3.name[strcspn(product3.name, "\n")] = '\0';
    printf("Product 3 - price: ");
    scanf("%lf", &product3.price);
    printf("Product 3 - quantity: ");
    scanf("%d", &product3.quantity);

    double total = (product1.price * product1.quantity) + (product2.price * product2.quantity) + (product3.price * product3.quantity);

    printf("Total warehouse value: %.2lf UAH\n", total);

    return 0;
}
