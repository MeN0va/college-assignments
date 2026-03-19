#include <stdio.h>
#include <string.h>

struct Product {
    char name[20];
    double price;
};

int main(void) {
    struct Product product1, product2;

    printf("Product 1 - name: ");
    fgets(product1.name, 20, stdin);
    product1.name[strcspn(product1.name, "\n")] = '\0';

    printf("Product 1 - price: ");
    scanf("%lf", &product1.price);
    getchar();

    printf("Product 2 - name: ");
    fgets(product2.name, 20, stdin);
    product2.name[strcspn(product2.name, "\n")] = '\0';

    printf("product 2 - price: ");
    scanf("%lf", &product2.price);

    if (product1.price > product2.price) {
        printf("%s is more expensive\n", product1.name);
    } else if (product2.price > product1.price) {
    printf("%s is more expensive\n", product2.name);
    }

    return 0;
}

