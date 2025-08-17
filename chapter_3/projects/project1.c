#include <stdio.h>

int main() {
    char user_date[80];

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%79s", user_date);

    printf("You entered the date: %s\n", user_date);

    return 0;
}
