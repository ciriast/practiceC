#include <stdio.h>

int main() {
    int numbers_from_user[15];
    int arragment = 4;
    int number_groups [3][3];

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d", &numbers_from_user[0]);
    scanf("%d", &numbers_from_user[1]);
    scanf("%d", &numbers_from_user[2]);
    scanf("%d", &numbers_from_user[3]);
    scanf("%d", &numbers_from_user[4]);
    scanf("%d", &numbers_from_user[5]);
    scanf("%d", &numbers_from_user[6]);
    scanf("%d", &numbers_from_user[7]);
    scanf("%d", &numbers_from_user[8]);
    scanf("%d", &numbers_from_user[9]);
    scanf("%d", &numbers_from_user[10]);
    scanf("%d", &numbers_from_user[11]);
    scanf("%d", &numbers_from_user[12]);
    scanf("%d", &numbers_from_user[13]);
    scanf("%d", &numbers_from_user[14]);
    scanf("%d", &numbers_from_user[15]);

    int control_row = 0;
    int control_column = 0;

    for (int i = 0; i < 15; ++i) {
        number_groups[control_row][control_column] = numbers_from_user[i];
        control_column++;

        if (control_column == 4) {
            control_row++;
            control_column = 0;
        }
    }

    printf("example: %d", number_groups[0][3]);

    return 0;
}
