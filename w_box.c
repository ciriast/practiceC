#include <stdio.h>

#define INCHES_PER_POUND 166

int main() {
    int height = 0;
    int width = 0;
    int length = 0;

    printf("Enter the box height: ");
    scanf("%d", &height);

    printf("Enter the box width: ");
    scanf("%d", &width);

    printf("Enter the box length: ");
    scanf("%d", &length);

    int volume = length * height * width;
    int weight = (volume + INCHES_PER_POUND) / INCHES_PER_POUND;

    printf("Weight: %d\n", weight);

    return 0;
}
