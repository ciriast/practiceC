#include <stdio.h>

int main() {
    int item_number;
    float item_price;
    char item_purchase_date[30];

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &item_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s", item_purchase_date);

    printf("%19s", "Item");
    printf("%25s", "Unit Price");
    printf("%28s\n", "Purchase date");

    return 0;
} 
