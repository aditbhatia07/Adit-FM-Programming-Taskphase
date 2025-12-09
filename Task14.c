#include <stdio.h>
#include <ctype.h>
// Write a program to read a file and count the number of characters, words, and lines in a file.
int main()
{
    char fpath[200];
    input:
    printf("Enter File Path: ");
    scanf("%s", fpath);
    FILE *fp = fopen(fpath, "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file, try again.\n");
        goto input;
    }
    int ch=0, c=0, w=0, l=0, lc=0;
    while ((ch=fgetc(fp))!=EOF)
    {
        c++;
        if (ch=='\n')
        {
            l++;
        }
        if (!isspace(lc) && isspace(ch))
        {
            w++;
        }
        lc=ch;
    }
    if (!isspace(lc) && c > 0)
    {
        w++;
    }
    if (c > 0 && lc != '\n')
    {
        l++;
    }
    printf("Number of characters: %d\nNumber of words: %d\nNumber of lines:%d", c, w, l);
    return 0;
}