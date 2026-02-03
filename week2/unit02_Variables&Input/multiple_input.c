// Write a program that:

// 1. Ask for age(int)
// 2. Ask for height(float)
// 3. Print both   

#include <stdio.h>

int main(){
    int age;
    float height;

    printf("What is your age?:");
    scanf("%d",&age);

    printf("What is your height?:");
    scanf("%f", &height);

    printf("Your age is: %d\n", age);
    printf("your height is: %.2f\n ", height);
    
    return 0 ;
}