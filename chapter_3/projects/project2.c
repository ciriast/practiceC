#include <stdio.h>

int my_strlen(char *s);

int main() {
    int item_number;
    float item_price;
    char item_purchase_date[30];
    int space_count = 19;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &item_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s", item_purchase_date);

    printf("%19s", "Item");
    printf("%25s", "Unit Price");
    printf("%28s\n", "Purchase date");

    printf("%19d", item_number);
    printf("%25.2f", item_price);
    printf("%28s\n", item_purchase_date);

    return 0;
} 
