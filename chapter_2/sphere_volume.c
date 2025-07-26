#include <stdio.h>

const float pi_value = 3.1416f;

int main() {
    float sphere_radius = 0;

    printf("Enter the sphere radius:\n");
    scanf("%f", &sphere_radius);

    float volume = (4.0f/3.0f) * pi_value * (sphere_radius * sphere_radius * sphere_radius);
    printf("The sphere volume is: %f\n", volume);
    
    return 0;
}
