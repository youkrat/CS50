#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool string_comp(char *s, char *c);
char *get_string(char *prompt);

int main(void) {
    char *word = get_string("Enter word to compare: ");
    char *reference = get_string("Enter reference word: ");

    if (string_comp(word, reference)) {
        printf("Similar\n");
    } else {
        printf("Not similar\n");
    }

    free(word);
    free(reference);
}

bool string_comp(char *s, char *c) {
    int i = 0;
    while (s[i] != '\0' && c[i] != '\0') {
        if (s[i] != c[i]) {
            return false;
        }
        i++;
    }
    return s[i] == c[i];  // ensure both end together
}

char *get_string(char *prompt) {
    char temp[100];
    printf("%s", prompt);

    if (scanf("%99s", temp) != 1) {
        return NULL;
    }

    char *result = malloc(strlen(temp) + 1);
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    strcpy(result, temp);
    return result;
}
