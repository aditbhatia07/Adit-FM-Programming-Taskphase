#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
//Implement a program count the number of vowels and consonants in the given string as well as to scramble the characters of a string randomly.
void count(char *str)
{
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if (isalpha(str[i]))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Number of Vowels is: %d\n", vowels);
    printf("Number of Consonants is: %d\n", consonants);
}
void scramble(char *str)
{
    int n = strlen(str);
    srand(time(0));
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    count(str);
    printf("Initial String: %s\n", str);
    scramble(str);
    printf("Scrambled String: %s\n", str);
    return 0;
}