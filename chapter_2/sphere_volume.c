#include <stdio.h>

const float pi_value = 3.1416f;

int main() {
    float volume = (4.0f/3.0f) * pi_value * (10*10*10);
    printf("The sphere volume is: %f\n", volume);
    
    return 0;
}
