// Read 10 digits from the user, store them in an array and then sum them up

#include <stdio.h>

int main(void){

    int numbers [10]; // 10 boxes to store our numbers
    int sum = 0;        // To keep track of the total
    char input_char;

    printf("Please enter 10 digits (one after another):\n");
// Read 10 digits and put them in the array
    for (int i=0; i <10; i++){
        input_char = getchar();     // Get the character from the keyboard

        // Use teh trick: subtract '0' (48) to get the math value
        numbers[i] = input_char - '0';
    }

    // Sum up the values stored in the array
    for (int i =0; i<10; i++){
        sum = sum + numbers[i];
    }

    printf("The total sum is: %d\n", sum );
    
    return 0;
}