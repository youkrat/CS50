#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *get_string(char *prompt);

int main (void){
    char *s = "Hi!";
        printf("%s\n", s);
        printf("%s\n", s + 1);
}


char *get_string(char *prompt){
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