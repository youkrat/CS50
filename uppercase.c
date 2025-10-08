#include <ctype.h>
#include <stdio.h>
#include <string.h>


void get_string(char str[], int size);
void capitalize(char str[]);

int main(void) {
    char string[100];

    printf("Enter a string: ");
    get_string(string, sizeof(string));

    capitalize(string);

    printf("Capitalized: %s\n", string);
    return 0;
}

void get_string(char str[], int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
}

void capitalize(char str[]) {// or use toupper from ctype.h
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
