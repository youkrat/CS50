#include <stdio.h>

int get_score(int score_number);

int main(void){
    int scores[3];
    int i;
    for (int i = 0; i < 3; i++){
        scores[i] = get_score(i);
        printf("Your scores are: %d\n", scores[i]);
    }
    printf("Your total score is: %d\n", scores[0] + scores[1] + scores[2]);
    return 0;
}

int get_score(int score_number){
    int score;
    printf("Enter score %d: ", score_number+1);
    scanf("%d", &score);
    return score;
}