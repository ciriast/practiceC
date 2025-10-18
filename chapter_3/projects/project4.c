#include <stdio.h>

int get_string_length(char *user_data);

int main() {
    char phone_number[50];

    printf("Enter your phone number: ");
    scanf("%s", phone_number);

    int user_data_length = get_string_length(phone_number);

    printf("user data length: %d\n", user_data_length);

    // my first comment from my gnu/linux laptop!
    // ok, now I have vim setup in my laptop
    // Look, I'm trying to get better
    return 0;
}

int get_string_length(char *user_data) {
    int counter = 0;

    while(user_data[counter] != '\0') {
        counter ++;
    }

    return counter;
}
    
