#include <stdio.h>

int main() {
    
    float loan_amount = 0;
    const float monthly_payment = 386.66f;
    float annual_interest = 0;
    float annual_interest_converted = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &annual_interest);

    printf("Monthly payment: %.2f\n", monthly_payment);

    return 0;
}
