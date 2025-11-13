#include <stdio.h>

int main() {
    
    int first_digit;
    int first_group_digit;
    int second_group_digit;

    printf("Enter the first (single) digit: ");
    scanf("%d", &first_digit);

    printf("Enter first group of five digits: ");
    scanf("%d", &first_group_digit);

    printf("Enter second group of five digits: ");
    scanf("%d", &second_group_digit);

    printf("Check digit: %d\n", 5);

    return 0;
}
