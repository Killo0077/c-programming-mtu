// count characters

#include <stdio.h>

int main(void){

    int ch;
    int count = 0;

    printf("Type something:\n");

    ch = getchar(); //read first character

    while (ch != '\n'){
        count++;    // increase counter
        ch = getchar(); // read next character
    }

    printf("Total characters = %d\n", count);

    return 0;
}