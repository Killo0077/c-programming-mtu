// Read a line with getchar() and count lenght

#include <stdio.h>

int main(void) {
    int ch;
    int len = 0;

    printf("Type something and press Enter: ");

    // Read characters until Enter (newline)
    while ((ch = getchar()) != '\n' && ch != EOF) {
        len++;  // count every character typed
    }

    printf("Length = %d\n", len);
    return 0;
}

