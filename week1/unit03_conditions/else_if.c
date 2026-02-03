// Program rules:

// Ask for a grade (0–100)
// If grade ≥ 90 → Excellent
// Else if grade ≥ 60 → Pass
// Else → Fail

#include <stdio.h>

int main(){
    int grade;

    printf("What is your grade:");
    scanf("%d", &grade);

    if (grade >= 90){
        
        printf("Excelente!!\n");
    } else if (grade >=60) {
       
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}