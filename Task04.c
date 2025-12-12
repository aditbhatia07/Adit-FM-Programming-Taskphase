#include <stdio.h>
#include <string.h>
//Create a program to simulate a simple login system with 3 attempts to enter the correct password.
int main ()
{
    char pw[100], in[100];
    printf ("Create a Password without spaces and under 50 characters: ");
    scanf ("%s", pw);
    for (int i=1; i<=3; i++)
    {
        printf ("\n Attempt %d, Enter Password: ", i);
        scanf ("%s", in);
        if (strcmp(in, pw) ==0)
        {
            printf("\n Password is correct.");
            break;
        }
        else 
        {
            printf("\n Password is incorrect, %d tries left ", 3-i);
        }
    }
}