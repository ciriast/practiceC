#include <stdio.h>

int find_in_text(int start_index, char *text, int text_length);
int text_length(char *text);
char *get_piece_of_text(int start_index, int end_index, char *text);

int main() {

    char user_isbn [50];

    printf("Enter a ISBN: ");
    scanf("%s", user_isbn);

    int text_length_val = text_length(user_isbn);
        
    int first_index = find_in_text(0, user_isbn, text_length_val);

    printf("%d\n", first_index);

    return 0;
}

int find_in_text(int start_index, char *text, int text_length) {
    
    for(int i = start_index + 1; i < text_length; i++) {
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

char *get_piece_of_text(int start_index, int end_index, char *text) {
    char piece_of_text [15];

    for (int i = start_index; i <= end_index; ++i) {
        piece_of_text[i] = text[i];
    }

    return piece_of_text;
}
