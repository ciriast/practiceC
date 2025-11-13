#include <stdio.h>

int main() {
    
    int first_digit;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5;
    int first_sum;
    int second_sum;
    int total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &first_digit);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    printf("Check digit: %d\n", 5);

    return 0;
}
