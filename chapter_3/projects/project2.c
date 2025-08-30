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



    int item_number_len = snprintf(NULL, 0, "%d", item_number);
    int item_price_len = snprintf(NULL, 0, "%.2f", item_price);
    int item_purchase_date_len = my_strlen(item_purchase_date);

    char item_number_format [20];
    char item_price_format [20];
    char price_format [20];
    char item_purchase_date_format [20];

    int add_character_len = 0;
    int sum_character_spaces = 0;

    if (item_number_len > 4) {
        sum_character_spaces = item_number_len - 4;
    }
    else
        add_character_len = 4 - item_number_len;

    snprintf(item_number_format, 20, "%%%dd", space_count + item_number_len);
    snprintf(item_price_format, 20, "%%%d.2f", space_count + item_price_len + add_character_len);
    snprintf(price_format, 20, "%%%ds", space_count + 10 + sum_character_spaces);

    printf("%23s", "item");
    printf(price_format, "Unit Price");
    printf("%32s\n", "Purchase date");

    printf(item_number_format, item_number);
    printf(item_price_format, item_price);
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
