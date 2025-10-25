#include <stdio.h>

int firstzero(char S[]);
int countzeros(char S[]);

int main (void){
    printf("%d\n", countzeros("100100\0"));
    
}

int firstzero(char S[]){
    int i = 0;
    while (S[i] != '\0'){
        printf("s = %s s[%d] = %c\n", S, i, S[i]);
        if (S[i] == '0'){
            return i;
        } i++;
    } return -1;
}

int countzeros(char S[]){
    int x = 0;
    int b = firstzero(S);
    while (b >= 0 ){
        x +=1;
        S = &S[b + 1];
        b = firstzero(S);
    } return x;
}
