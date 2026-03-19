#include <stdio.h>
#include <string.h>

struct Product {
    char name[20];
    int price;
};

struct Order {
    int quantity;
    struct Product item;
};

int main(void) {
    struct Order order1;

    printf("Product name: ");
    fgets(order1.item.name, 20, stdin);
    order1.item.name[strcspn(order1.item.name, "\n")] = '\0';
    printf("Product price: ");
    scanf("%d", &order1.item.price);
    printf("Order quantity: ");
    scanf("%d", &order1.quantity);

    double total = order1.item.price * order1.quantity;

    printf("Order total: %.2lf UAH\n", total);

    return 0;
}
