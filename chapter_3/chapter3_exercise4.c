#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    float x = 0;

    printf("Enter the values for i, j and x\n");
    scanf("%d%f%d", &i, &x, &j);

    printf("x: %f\n", x);
    printf("i: %d\n", i);
    printf("j: %d\n", j);

    return 0;
}
