#include <stdio.h>

char calculateGrade(float A, float HW, float CT, float MT, float TF) 
{
    float totalMarks = A * 0.05 + HW * 0.10 + CT * 0.15 + MT * 0.30 + TF * 0.40;
    if (totalMarks >= 90 && totalMarks <= 100) {
        return 'A';
    } 
    else if (totalMarks >= 86 && totalMarks <= 89) {
        return 'A-';
    } 
    else if (totalMarks >= 82 && totalMarks <= 85) {
        return 'B+';
    } 
    else if (totalMarks >= 78 && totalMarks <= 81) {
        return 'B';
    } 
    else if (totalMarks >= 74 && totalMarks <= 77) {
        return 'B-';
    } 
    else if (totalMarks >= 70 && totalMarks <= 73) {
        return 'C+';
    } 
    else if (totalMarks >= 66 && totalMarks <= 69) {
        return 'C';
    } 
    else if (totalMarks >= 62 && totalMarks <= 65) {
        return 'C-';
    } 
    else if (totalMarks >= 58 && totalMarks <= 61) {
        return 'D+';
    } 
    else if (totalMarks >= 55 && totalMarks <= 57) {
        return 'D';
    } 
    else {
        return 'F';
    }
}

int main() {
    int numStudents;
    scanf("%d", &numStudents);
    for (int i = 1; i <= numStudents; i++) 
    { 
        float A, HW, CT, MT, TF;
        scanf("%f %f %f %f %f", &A, &HW, &CT, &MT, &TF);
        char grade = calculateGrade(A, HW, CT, MT, TF);
        printf("Student %d: %c\n", i, grade);
    }

    return 0;
}
