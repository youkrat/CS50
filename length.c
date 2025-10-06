#include <stdio.h>


const int N;
int main(void){

    char name[N];
    printf("Name: "); 
    fgets(name, N, stdin);

    int n = 0;
    while(name[n] != '\0'){
        n++;
    }   
}