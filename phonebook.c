#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_string(char *prompt);

int main(void) {
    char *names[] = {"David", "John", "Yuliia"};
    char *numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-2468-2750"};
    
    char *name = get_string("Enter name: ");
    for (int i = 0; i < 3; i++){

        if (strcmp(names[i],name) == 0)
        {
            printf("Found %s Phone No:%s\n", names[i], numbers[i]);
        }
    
    }
    free(name);
    return 0;
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
