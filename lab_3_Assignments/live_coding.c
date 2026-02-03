// If given a string (char given_string[] = “test_string”), write code to reverse the string. Create a new array that will hold the reversed string.
// Note: you will need to check the length of the string first.  


#include <stdio.h>

int main(void)
{
    char given_string[] = "test_string";
    char reversed[20];   
    int length = 0;
    int i;

   
    while (given_string[length] != '\0')
    {
        length++;
    }

    
    for (i = 0; i < length; i++)
    {
        reversed[i] = given_string[length - 1 - i];
    }

   
    reversed[length] = '\0';

    printf("Original: %s\n", given_string);
    printf("Reversed: %s\n", reversed);

    return 0;
}
