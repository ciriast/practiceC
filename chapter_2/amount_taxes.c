#include <stdio.h>

int main() {
    float user_amount = 0;

    printf("Enter the amount:");
    scanf("%f", &user_amount);

    float amount_with_taxes = (user_amount * 0.05f) + user_amount;

    printf("Amount with taxes: %f\n", amount_with_taxes);

    return 0;

}
