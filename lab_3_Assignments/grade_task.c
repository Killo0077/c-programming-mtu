// Implement a password checking program


#include <stdio.h>

int main(void)
{
    char temp[30];     /* max 16, but 30 is safe */
    char password[30];
    int len;
    int i;

    while (1)
    {
        int has_upper = 0;
        int has_lower = 0;
        int has_digit = 0;
        int has_special = 0;

        printf("Enter password (8 to 16 chars): ");

        /* Read input */
        len = 0;
        while (1)
        {
            char ch = getchar();

            if (ch == '\n')
                break;

            if (len < 29)   /* prevent overflow */
            {
                temp[len] = ch;
                len++;
            }
        }

        temp[len] = '\0';

        /* Check length (no ||) */
        if (len < 8)
        {
            printf("Too short. Try again.\n\n");
            continue;
        }
        if (len > 16)
        {
            printf("Too long. Try again.\n\n");
            continue;
        }

        /* Copy into password array */
        for (i = 0; i < len; i++)
            password[i] = temp[i];
        password[len] = '\0';

        /* Check characters */
        for (i = 0; i < len; i++)
        {
            char ch = password[i];

            if (ch >= 'A' && ch <= 'Z')
                has_upper = 1;
            else if (ch >= 'a' && ch <= 'z')
                has_lower = 1;
            else if (ch >= '0' && ch <= '9')
                has_digit = 1;
            else
                has_special = 1;
        }

        if (has_upper == 0)
        {
            printf("Need at least 1 uppercase letter. Try again.\n\n");
            continue;
        }
        if (has_lower == 0)
        {
            printf("Need at least 1 lowercase letter. Try again.\n\n");
            continue;
        }
        if (has_digit == 0)
        {
            printf("Need at least 1 digit (0-9). Try again.\n\n");
            continue;
        }

        printf("\nPassword accepted: %s\n", password);

        if (has_special == 1)
            printf("Strength: STRONG (has special character)\n");
        else
            printf("Strength: WEAK (no special character)\n");

        break;
    }

    return 0;
}
