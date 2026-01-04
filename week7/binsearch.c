#include <stdio.h>


int main(void){
    int x = 625;
    int numGuesses = 0;
    int epsilon = 1;
    int low = 0;
    int high = x;
    int guess = (high+low)/2;
    while(guess*guess - x){
        if(guess*guess < x){
            low = guess;
        }else{
            high = guess;
        }
        guess = (high+low)/2.0;
        numGuesses += 1;
    }printf("%d is close to square root of %d\n", guess, x);
    printf("Number of guesses:%d\n", numGuesses);
}

