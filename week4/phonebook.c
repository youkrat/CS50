#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *get_string(char *prompt);

int main(void){
    FILE *file = fopen("phonebook.csv", "a");

    if (file == NULL){
        return 1;
    }
    
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);
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