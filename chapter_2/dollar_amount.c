#include <stdio.h>

void show_bill_message(int twenty_bill_count, int ten_bill_count, int five_bill_count, int one_bill_count) {

    printf("$20 bills: %d\n", twenty_bill_count);
    printf("$10 bills: %d\n", ten_bill_count);
    printf("$5 bills: %d\n", five_bill_count);
    printf("$1 bills: %d\n", one_bill_count);

}

int main() {

    float user_amount = 0;

    const int twenty_bill = 20;
    const int ten_bill = 10;
    const int five_bill = 5;
    const int one_bill = 1;

    printf("Enter a dollar amount: ");
    scanf("%f", &user_amount);
    
    int amount_after_substraction = user_amount;

    const int twenty_bill_count = user_amount / twenty_bill;
    amount_after_substraction = amount_after_substraction - (twenty_bill_count * twenty_bill);

    int ten_bill_count = 0;
    int five_bill_count = 0;
    int one_bill_count = 0;

    if (amount_after_substraction <= 0) {
        show_bill_message(twenty_bill_count, ten_bill_count, five_bill_count, one_bill_count);

        return 0;
    }

    ten_bill_count = amount_after_substraction / ten_bill;
    amount_after_substraction = amount_after_substraction - (ten_bill_count * ten_bill);

    if (amount_after_substraction <= 0) {
        show_bill_message(twenty_bill_count, ten_bill_count, five_bill_count, one_bill_count);

        return 0;
    }

    five_bill_count = amount_after_substraction / five_bill;
    amount_after_substraction = amount_after_substraction - (five_bill_count * five_bill);

    if (amount_after_substraction <= 0) {
        show_bill_message(twenty_bill_count, ten_bill_count, five_bill_count, one_bill_count);

        return 0;
    }

    one_bill_count = amount_after_substraction / one_bill;
    amount_after_substraction = amount_after_substraction - (one_bill_count * one_bill);

    if (amount_after_substraction <= 0) {
        show_bill_message(twenty_bill_count, ten_bill_count, five_bill_count, one_bill_count);

    }

    return 0;
}
