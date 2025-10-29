#include <stdio.h>
#include <string.h>

char *f(char A[], char B[]){
    char D[] = {'x','y','z'};
    B[2] = D[2];
    return D;


}

int main (void){
    char A[] = {'a','b','c'};
    char B[] = {'d','e','f'};
    char *C = f(A,B);
    for( int i = 0; i < strlen(B); i++){
        printf("%c\n", B[i]);
        printf("%c\n", C[i]);
    }
}