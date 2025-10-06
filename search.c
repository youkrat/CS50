#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    printf("Enter target to search for: ");
    int target;
    scanf("%d", &target);
    int n = sizeof(numbers);
    for (int i = 0; i < n; i++){
        if (numbers[i] == target){
            printf("Found %d at numbers[%d]\n", target, i + 1);
            return 0;
        }
    }
 return 1;
}