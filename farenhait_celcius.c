#include <stdio.h>

#define SUBSTRACT_VALUE 32

int main() {
    float farenhait_val = 0;

    printf("Enter Farenhait: ");
    scanf("%f", &farenhait_val);

    float celsiues_val = (farenhait_val - SUBSTRACT_VALUE) * (5.0f / 9.0f);

    printf("Celsiues equivalent: %f\n", celsiues_val);

    return 0;
}

