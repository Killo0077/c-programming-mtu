// Since you can't use arrays here, imagine you are a calculator. You only remember two things: The GRand Total and the Number 
// you are currently typing.

#include <stdio.h>

int main(void) {

    int total_sum =0;           //The final answer
    int current_number =0;      // The number we are currently building
    char letter;                // The character we just read from the keyboard

    printf("Enter numbers (like 10,20,30) then press Enter: ");

    while ((letter = getchar()) != '\n') {
        if (letter >= '0' && letter <= '9') {
            int digit = letter - '0';
            current_number = (current_number * 10) + digit;
        }

        else if (letter == ','){
            total_sum = total_sum + current_number;
            current_number = 0;
        }
    }

    total_sum = total_sum + current_number;

    printf("The total sum is: %d\n", total_sum);

    return 0;

    
}