#include <stdio.h>

int main(void)
{   
    int x; 
    int y;
    printf("What is x? ");
    scanf("%d", &x);
    printf("What is y? ");
    scanf("%d", &y);
    printf("x / y = %.5f\n", (float) x/y);//casting to float
    return 0;
}