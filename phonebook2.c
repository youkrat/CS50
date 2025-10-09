#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char *get_string(char *prompt);

typedef struct
 {
    char *name;
    char *number;


}person;

int main (void){
    person people[3];
    people[0].name = "David";
    people[0].number = "+1-617-495-1000";

    people[1].name = "John";
    people[1].number = "+1-949-468-2750";

    people[2].name = "Yuliia";
    people[2].number = "+1-617-495-1000";
    char *name = get_string("Name: ");
    for( int i = 0; i < 3; i++){
        if(strcmp(people[i].name, name) == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }printf("Not found\n");
    return  1;

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

