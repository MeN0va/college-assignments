#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[30];
    int year;
};

int main(void) {
    struct Book book1 = {0};

    printf("Enter title: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    book1.title[strcspn(book1.title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    book1.author[strcspn(book1.author, "\n")] = '\0';

    printf("Enter year: ");
    scanf("%d", &book1.year);

    printf("\"%s\" by %s (%d)\n", book1.title, book1.author, book1.year);

    return 0;
}
