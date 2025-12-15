#include <stdio.h>
#include <string.h>
// Create a program to simulate a simple login system with 3 attempts to enter the correct password.
int main()
{
    char pw[100], in[100];
    printf("Create a password under 100 characters: ");
    fgets(pw, 100, stdin);
    pw[strcspn(pw, "\n")] = '\0';
    for (int i = 1; i <= 3; i++)
    {
        printf("\nAttempt %d, Enter Password: ", i);
        fgets(in, 100, stdin);
        in[strcspn(in, "\n")] = '\0';
        if (strcmp(in, pw) == 0)
        {
            printf("\nPassword is correct.");
            break;
        }
        else
        {
            printf("\nPassword is incorrect, %d tries left", 3 - i);
        }
    }
}