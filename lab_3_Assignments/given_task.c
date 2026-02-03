// Student: Pablo Baena
// Id: R00242509
// Module: C Programming

// Read in a string from the user and create a reflected version of the string

#include <stdio.h>

int main(void)
{
    char temp_array[30];  // Array store user input (max 30 characters)
    char user_input;        // Store one character at a time from getchar()
    int i = 0;
    char reflected[60];
    int j;      // Loop counter

    while (1)
    {
        user_input = getchar();

        if (user_input == '\n')
            break;

        if (i >= 29)
            break;

        temp_array[i] = user_input;
        i++;
    }

    temp_array[i] = '\0';   // Add null character to make temp_array a valid string
    printf("You typed: %s\n", temp_array);
    printf("Length i = %d\n", i);

    
    for (j = 0; j < i; j++)
        reflected[j] = temp_array[j];

   
    for (j = 0; j < i; j++)
        reflected[i + j] = temp_array[i - 1 - j];

    reflected[2 * i] = '\0';

    printf("The reflected string is: %s\n", reflected);

    return 0;
}
