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
    int first_index_group_identifier = first_index;

    int group_identifier_index = find_in_text(first_index_group_identifier, user_isbn, text_length_val);
    int first_index_publisher_code = group_identifier_index;

    int publisher_code_index = find_in_text(first_index_publisher_code, user_isbn, text_length_val);

    int gs1_prefix_buffer = first_index - 1;
    int group_identifier_buffer = (group_identifier_index - first_index_group_identifier) - 1;
    int publisher_code_buffer = (publisher_code_index - first_index_publisher_code) - 1;

    printf("index: %d\n", first_index_publisher_code);

    char *gs1_prefix = get_piece_of_text(0, gs1_prefix_buffer, user_isbn);
    char *group_identifier = get_piece_of_text(first_index_group_identifier, group_identifier_buffer, user_isbn);
    char *publisher_code = get_piece_of_text(first_index_publisher_code, publisher_code_buffer, user_isbn);

    printf("GS1 prefix: %s\n", gs1_prefix);
    printf("Group identifier: %s\n", group_identifier);
    printf("Publisher code: %s\n", publisher_code);

    free(gs1_prefix);
    free(group_identifier);
    free(publisher_code);

    return 0;
}

int find_in_text(int start_index, char *text, int text_length) {

    for(int i = start_index; i < text_length; i++) {
        if (text[i] == '-')
            return i + 1;
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
