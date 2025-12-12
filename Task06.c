#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
//Implement a program count the number of vowels and consonants in the given string as well as to scramble the characters of a string randomly.
void count(char *str)
{
    int vowels = 0, consonants = 0, digits = 0, symbols = 0, spaces = 0;
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
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (isspace(str[i]))
        {
            spaces++;
        }
        else
        {
            symbols++;
        }
    }
    printf("Number of Vowels is: %d\n", vowels);
    printf("Number of Consonants is: %d\n", consonants);
    printf("Number of Digits is: %d\n", digits);
    printf("Number of Spaces is: %d\n", spaces);
    printf("Number of Symbols/Special Characters is: %d\n", symbols);
// counting digits, spaces and special characters too
}
void scramble(char *str)
{
    int n = strlen(str);
    char non_space[100];
    int non_space_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            non_space[non_space_count++] = str[i];
        }
    }
    srand(time(0));
    for (int i = non_space_count - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        char temp = non_space[i];
        non_space[i] = non_space[j];
        non_space[j] = temp;
    }
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            str[i] = non_space[index++];
        }
    }
}
//added this for loop to make sure spaces are not scrambled
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