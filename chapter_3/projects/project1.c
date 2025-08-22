#include <stdio.h>

int main() {
    char user_date[80];

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%79s", user_date);

    char user_month[3] = {user_date[0], user_date[1], '\0'};

    printf("You entered the month: %s\n", user_month);

    return 0;
}
