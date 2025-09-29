#include <stdio.h>

void meow(int n);
int get_positive_int(void);

int main(void)
{
    int times = get_positive_int();
    meow(times);
    return 0;
}
int get_positive_int(void)
{
    int n;
    do {
    printf("Number of meows: ");
    scanf("%d", &n);
    } while (n < 1);
    return n;
} 
void meow (int n )
{
    for (int i =0; i<n; i++)
    {
        printf("meow\n"); 
    }
}

