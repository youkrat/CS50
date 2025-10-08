#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *string[] = {"battleship", "car", "house", "tree", "computer",
                      "phone", "cup", "bottle", "keyboard", "mouse"};
    
    char str[100];
    printf("Enter word: ");
    scanf("%99s", str);

    int n = sizeof(string) / sizeof(string[0]);

    for (int i = 0; i < n; i++) {
        if (strcmp(string[i], str) == 0) {
            printf("Found \"%s\" at index %d\n", string[i], i);
            return 0;
        }
    }

    printf("Word not found.\n");
    return 1;
}
