// Write a program that reads characters you type and counts how many times you typed the letter 'a'. It stops when you hit Enter.

#include <stdio.h>

int main(void){

    char letter;
    int count = 0;

    printf("Type something and press Enter: ");

    while ((letter = getchar()) != '\n'){
        if (letter == 'a'){
            count = count +1;
        }
    }

    printf("You typed the letter 'a' %d times!", count);

    return 0;
}