#include <stdio.h>
#include <string.h>

struct Product {
    char name [20];
    double price;
};

int main(void) {
    struct Product product[3];

    for (int i = 0; i < 3; i++) {
        printf("Product %d - name: ", i + 1);
        fgets(product[i].name, 20, stdin);
        product[i].name[strcspn(product[i].name, "\n")] = '\0';

        printf("Product %d - price: ", i + 1);
        scanf("%lf", &product[i].price);
        getchar();
    }

    int cheapest = 0;
    for (int i = 0; i < 3; i++) {
        if (product[i].price < product[cheapest].price) {
            cheapest = i;
        }
    }

    printf("Cheapest: %s (%.2lf UAH)\n", product[cheapest].name, product[cheapest].price);

    return 0;
}
