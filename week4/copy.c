#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *get_string(char *prompt);

int main (void){
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    if (t == NULL){
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++ ){
          
        t[i] = s[i];

    }
    if (strlen(t) > 0){

        t[0] = toupper(t[0]);

    } else{

        printf("Invalid value\n");
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(s);
    free(t);
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