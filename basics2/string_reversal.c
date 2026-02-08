// The gola here is to find the end of a string and copy it backward into a new localitation.

#include <stdio.h>
#include <string.h>

int main() {
    // Task: Initialize the given string
    char given_string[] = "test_string";
    
    // Task: Check the length of the string
    int length = 0;
    while (given_string[length] != '\0') {
        length++;
    }

    // Task: Create a new array to hold the reversed string
    // We add 1 for the null terminator '\0'
    char reversed_string[length + 1];

    // Task: Reverse the string
    for (int i = 0; i < length; i++) {
        // We take from the end of given_string and put at the start of reversed_string
        reversed_string[i] = given_string[length - 1 - i];
    }
    
    // Task: Add the null terminator to the end of the new string
    reversed_string[length] = '\0';

    printf("Original: %s\n", given_string);
    printf("Reversed: %s\n", reversed_string);

    return 0;
}