#include <stdio.h>

void for_fun() {
    for (int i = 0; i < 9; ++i) {
        printf("Having fun %d\n", i);
    }
}

struct position {
    int x;
    int y;
};

int main() {
    printf("Hello friend, hello friend.\n");

    int positions[2] = {12, 15};
    printf("X position: %d\n", positions[0]);
    printf("Y position: %d\n", positions[1]);

    struct position my_position;
    my_position.x = 20;
    my_position.y = 20;

    printf("struct position in x: %d\n", my_position.x);
    printf("struct position in y: %d\n", my_position.y);

    return 0;
}
