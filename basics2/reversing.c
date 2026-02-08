#include <stdio.h>

int main(void){

    char given_string[] = "test_string";
    int length =0;

    while (given_string[length] != '\0') {
        length = length +1;
    }

    char reversed_string[length +1];

    int i;
    for (i =0; i < length; i= i + 1){
        reversed_string[i] = given_string[length - 1 - i];
    }

    reversed_string[length] = '\0';

    printf("Original: %s\n", given_string);
    printf("Reverse: %s\n", reversed_string);

    return 0;
}