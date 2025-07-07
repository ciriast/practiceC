#include <stdio.h>

void for_fun() {
    for (int i = 0; i < 9; ++i) {
        printf("Having fun %d\n", i);
    }
}

int main() {
    printf("Hello friend, hello friend.\n");
    for_fun();

    return 0;
}
