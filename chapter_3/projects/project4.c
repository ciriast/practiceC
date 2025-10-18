#include <stdio.h>
#include <stdlib.h>

int get_string_length(char *user_data);
char *replace_character(int buffer, char *user_data);

int main() {
    char phone_number[50];

    printf("Enter your phone number: ");
    scanf("%s", phone_number);

    int user_data_length = get_string_length(phone_number);

    char *replaced_text = replace_character(user_data_length, phone_number);

    printf("The user phone is: %s\n", replaced_text);

    free(replaced_text);
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
 
char *replace_character(int buffer, char *user_data) {
    int buffer_with_end = buffer + 1;
    char *my_new_text = (char*) malloc(buffer_with_end);

    for(int i = 0; i < buffer; ++i){
        my_new_text[i] = user_data[i];

        if (my_new_text[i] == '-') {
            my_new_text[i] = '.';
        }
    }

    my_new_text[buffer_with_end] = '\0';

    return my_new_text;
}
