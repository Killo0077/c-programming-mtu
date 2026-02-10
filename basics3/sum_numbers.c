#include <stdio.h>

int main(void) {

    int ch;
    int sum = 0;
    int number = 0;

    printf("Enter numbers separated by commas: ");

    ch = getchar();

    while (ch != '\n' && ch != EOF) {

        if (ch >= '0' && ch <= '9') {
            int digit = ch - '0';
            number = number * 10 + digit;
        }

        else if (ch == ',') {
            sum += number;
            number = 0;
        }

        ch = getchar();
    }

    // Add the last number
    sum += number;

    printf("Sum = %d\n", sum);

    return 0;
}