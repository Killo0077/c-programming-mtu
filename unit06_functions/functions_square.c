// 🧩 Unit 06 – Functions (Part 1)

// Task

// Write a program that:

// Defines a function square
// Takes an integer
// Returns its square
// Prints the result in main


#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d\n", square(n));
    return 0;
}
