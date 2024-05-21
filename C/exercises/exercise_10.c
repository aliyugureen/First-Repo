#include <stdio.h>

int main () {

    // getting the scores
    int scores[10]; 
    int score = 0;  
    int i = 0;   
    for (i = 0; score >= 0; ++i) {
         
        printf("Enter score (4-10): ");
        scanf("%d", &score);
        scores[i] = score;           
    }

    int length = i-1;

    printf("You entered %d scores\n", length);
    int total = 0;
    for (int i = 0; i < length; ++i) {
        total += scores[i];
    }
    float average =(float) total / (float) length;
    printf("Average score is: %.2f\n", average);
    return 0;
   
}