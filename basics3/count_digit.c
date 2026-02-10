// Count Digits


#include <stdio.h>

int main(void){

    int ch;
    int count =0;

    printf("Type something: \n");

    ch = getchar();

    while (ch != '\n' && ch != EOF){

        if (ch >= '0' && ch <= '9'){
            count++;
        }
        
        ch = getchar(); //read next character (important)
            
    }

    printf("digits = %d\n", count);

    return 0;
}