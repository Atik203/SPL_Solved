#include <stdio.h>

int main() {
    float score;
    scanf("%f", &score);

    if (score >= 90) 
    {
        printf("Grade: A \n");
    }
     else if (score >= 86) 
     {
        printf("Grade: A- \n");
    } 
    else if (score >= 82) 
    {
        printf("Grade: B+\n");
    } 
    else if (score >= 78) 
    {
        printf("Grade: B \n");
    } 
    else if (score >= 74) {
        printf("Grade: B- \n");
    } 
    else if (score >= 70) {
        printf("Grade: C+\n");
    } 
    else if (score >= 66) {
        printf("Grade: C \n");
    } 
    else if (score >= 62) {
        printf("Grade: C- \n");
    }
    else if (score >= 58) {
        printf("Grade: D+\n");
    } 
    else if (score >= 55) {
        printf("Grade: D \n");
    } 
    else {
        printf("Grade: F\n");
    }

    return 0;
}
