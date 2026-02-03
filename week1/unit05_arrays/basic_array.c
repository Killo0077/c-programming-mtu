// ARRAYS
// An array stores many values of the same type under one name.

// for (int i = 0; i < size; i++) {
//     // use array[i]
// }


// Task

// Write a program that:
// Declares an array of 5 integers
// Stores values: 1, 2, 3, 4, 5
// Prints each value using a for loop

#include <stdio.h>

int main(){

    int nums[5];

    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;
    nums[4] = 5;

    for (int i= 0; i < 5; i++) {
        printf("%d\n", nums[i]);

    }
    return 0;
}