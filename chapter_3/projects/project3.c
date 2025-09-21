#include <stdio.h>
#include <stdlib.h>

int find_in_text(int start_index, char *text, int text_length);
int text_length(char *text);
char *get_piece_of_text(int start_index, int buffer, char *text);

int main() {

    char user_isbn [50];

    printf("Enter a ISBN: ");
    scanf("%s", user_isbn);

    int text_length_val = text_length(user_isbn);
        
    int first_index = find_in_text(0, user_isbn, text_length_val);
    int group_identifier_index = find_in_text(first_index, user_isbn, text_length_val);
    int publisher_index = find_in_text(group_identifier_index, user_isbn, text_length_val);

    printf("group index: %d\n", group_identifier_index);
    printf("publisher_index: %d\n", publisher_index);

    char *gs1_prefix = get_piece_of_text(0, first_index, user_isbn);
    char *group_identifier = get_piece_of_text(first_index, group_identifier_index, user_isbn);

    printf("GS1 prefix: %s\n", gs1_prefix);
    printf("Group identifier: %s\n", group_identifier);

    free(gs1_prefix);
    free(group_identifier);

    return 0;
}

int find_in_text(int start_index, char *text, int text_length) {
    
    for(int i = start_index; i < text_length; i++) {
        if (text[i] == '-')
            return i;
    }
        
    return start_index;
}

int text_length(char *text) {
    int text_length_to_return = 0;

    while(text[text_length_to_return] != '\0') {
        text_length_to_return++;
    }

    return text_length_to_return;
}

char *get_piece_of_text(int start_index, int buffer, char *text) {
    int buffer_with_end = buffer + 1;       
    char *piece_of_text = (char*) malloc(buffer_with_end);
    int length_to_copy = buffer;

    for (int i = 0; i < length_to_copy; ++i) {
        piece_of_text[i] = text[start_index];
        start_index++;
    }

    piece_of_text[buffer_with_end - 1] = '\0';

    return piece_of_text;
}
