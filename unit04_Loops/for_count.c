// for is a cleaner while when you know how many times to repeat.

// for (initialization; condition; update) {
//     ....code
// }

// for (int i = 1; i <= 5; i++) {
//     printf("%d\n", i);
// }


// for (start; condition; change) {
//     work;
// }



// Write a program that:

// Asks for n
// Prints numbers from 1 to n using for

#include <stdio.h>

int main() {
    
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i =1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}

