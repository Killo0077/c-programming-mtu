// Populate an array of 10 digits using getchar() and sum up the numbers.
//include input validation to ensure that the user enters digits 0-9.



#include <stdio.h>

int main(void) {

    int numbers[10];
    int sum =0;
    int i;
    char ch;

    for (i = 0; i < 10;) {
        ch = getchar();

        if (ch ==  '\n')
        continue;

        if (ch < '0' || ch > '9')
        continue;

        numbers[i] = ch - '0';
        i++;
    }

    for (i =0; i < 10; i++) {

        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);


    return 0;
}
