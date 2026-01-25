// Write a program that:

// Asks for age
// If age ≥ 18 → print You are an adult
// Else → print You are a minor


#include <stdio.h>

int main(){
    int age;

    printf("What's your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("Adult\n");
    } else {
        printf("Minor\n");
    }
    return 0;
}