#include <stdio.h>

const int N = 3;
int get_score(int score_number);
float average(int length, int array[]);
int sum(int length, int array[]);

int main(void){
    int scores[N];
    for (int i = 0; i < N; i++){
        scores[i] = get_score(i);
        printf("Score: %d\n", scores[i]);
    }
    printf("Average: %.2f\n", average(N, scores));
    printf("Sum: %d\n", sum(N, scores));
    return 0;
}

//get score from user
int get_score(int score_number){
    int score;
    printf("Enter score %d: ", score_number+1);
    scanf("%d", &score);
    return score;
}

//calculate average 
//remember to specify array length before the array
float average(int length, int array[]){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum/ (float) length;
}

//calculate sum
int sum(int length, int array[])
    {
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += array[i];
    }
    return total;
}