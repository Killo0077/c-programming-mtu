// Goal: Type something, the program prints exaclty what you typed

#include <stdio.h>

int main(void){

    int ch;

    printf("Type something and press Enter: ");

    ch= getchar();      //read first char

    while (ch != '\n' && ch != EOF){
        putchar(ch);        //print the same char back
        ch= getchar();      // read next char

    }

    printf("\nDone");
    return 0;
}