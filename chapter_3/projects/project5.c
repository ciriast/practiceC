#include <stdio.h>

void print_array(int items[4]);
void sum_array(int items[4]);
void sum_columns(int item[4], int item2[4], int item3[4], int item4[4]);

int main() {
    int numbers_from_user[16];
    int arragment = 4;
    int number_groups [4][4];

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
    int control_column = 1;

    for (int i = 0; i < 16; ++i) {

        number_groups[control_row][control_column - 1] = numbers_from_user[i];

        control_column++;

        if (control_column == 5) {
            control_row++;
            control_column = 1;
        }
    }

    print_array(number_groups[0]);
    print_array(number_groups[1]);
    print_array(number_groups[2]);
    print_array(number_groups[3]);

    printf("**** SUM the rows ****\n");

    sum_array(number_groups[0]);
    sum_array(number_groups[1]);
    sum_array(number_groups[2]);
    sum_array(number_groups[3]);

    sum_columns(number_groups[0], number_groups[1], number_groups[2], number_groups[3]);

    return 0;
}

void print_array(int items[4]) {
    for (int i = 0; i < 4; ++i) {
        printf(" %d", items[i]);
    }

    printf("\n");
}


void sum_array(int items[4]) {
    int total = 0;

    for (int i = 0; i < 4; ++i) {
        total += items[i];
    }

    printf("total: %d\n", total);
}

void sum_columns(int item[4], int item2[4], int item3[4], int item4[4]) {
    int totals[4];

    for (int i = 0; i < 4; ++i) {
        totals[i] = item[i] + item2[i] + item3[i] + item4[i];
    }

    printf("**** SUM the columns ****\n");

    printf("column 1: %d\n", totals[0]);
    printf("column 2: %d\n", totals[1]);
    printf("column 3: %d\n", totals[2]);
    printf("column 4: %d\n", totals[3]);
}
