#include <stdio.h>

int main() {
    
    float loan_amount = 0;
    const float monthly_payment = 386.66f;
    float annual_interest = 0;
    float annual_interest_converted = 0;
    float monthly_interest = 0;
    float monthly_interest_amount = 0;
    float total_amount = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &annual_interest);

    printf("Monthly payment: %.2f\n", monthly_payment);

    annual_interest_converted = annual_interest / 100;

    monthly_interest = annual_interest_converted / 12;

    monthly_interest_amount = loan_amount * monthly_interest;
    total_amount = loan_amount + monthly_interest_amount;
    loan_amount = total_amount - monthly_payment;

    printf("Balance remain after first payment: %.2f\n", loan_amount);

    monthly_interest_amount = loan_amount * monthly_interest;
    total_amount = loan_amount + monthly_interest_amount;
    loan_amount = total_amount - monthly_payment;

    printf("Balance remain after second payment: %.2f\n", loan_amount);

    monthly_interest_amount = loan_amount * monthly_interest;
    total_amount = loan_amount + monthly_interest_amount;
    loan_amount = total_amount - monthly_payment;

    printf("Balance remian after third payment: %.2f\n", loan_amount);
 
    // I know I'm not following any good practice but I don't want to spend more time here, so, it's ok.
    return 0;
}
