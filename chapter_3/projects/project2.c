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

    printf("%23s", "Item");
    printf("%29s", "Unit Price");
    printf("%32s\n", "Purchase date");


    int item_number_len = snprintf(NULL, 0, "%d", item_number);
    int item_price_len = snprintf(NULL, 0, "%f", item_price);
    int item_purchase_date_len = my_strlen(item_purchase_date);

    char item_number_format [20];
    
    snprintf(item_number_format, 20, "%%%dd", space_count + item_number_len);

    printf(item_number_format, item_number);
    printf("%25.2f", item_price);
    printf("%28s\n", item_purchase_date);

    return 0;
}

int my_strlen(char *s) {
    int count = 0;

    while (*s != '\0') {
        count++;
        *s++;
    }

    return count;
}
