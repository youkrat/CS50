#include <stdio.h>
#include <math.h>

int compute_sqrt(int number);

int main(void){
 int n = compute_sqrt(21);
    printf("Square root is: %d\n", n);
    return 0;
}

int compute_sqrt(int number) {
    if (number < 0) return -1;
    if (number == 0 || number == 1) return number;

    double guess = number / 2.0;
    double prev;

    do {
        prev = guess;
        guess = (guess + number / guess) / 2.0;
        printf("Current guess: %.6f\n", guess);
    } while ((int)guess != (int)prev);

    return (int)guess;
}

//recursive version
/*
int sqrt_helper(int number, double guess) {
    double next = (guess + number / guess) / 2.0;

    if ((int)next == (int)guess)
        return (int)guess;

    return sqrt_helper(number, next);
}

int compute_sqrt(int number) {
    if (number < 0) return -1;
    if (number == 0 || number == 1) return number;
    return sqrt_helper(number, number / 2.0);
}
*/