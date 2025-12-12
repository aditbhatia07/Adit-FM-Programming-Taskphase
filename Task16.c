#include <stdio.h>
#include <string.h>
// Implement a recursive function to compress a string by replacing consecutive duplicate characters with their count (e.g., aaabbc becomes a3b2c1).
void count(char ch, int c, char *out, int *out_idx)
{
    out[(*out_idx)++] = ch;
    if (c > 1)
    {
        int written = sprintf(out + *out_idx, "%d", c);
        *out_idx += written;
    }
    out[*out_idx] = '\0';
}
void compress(const char *s, int idx, int len, char prev, int c, char *out, int *out_idx)
{
    if (idx == len)
    {
        count(prev, c, out, out_idx);
        return;
    }
    char curr = s[idx];
    if (curr == prev)
    {
        compress(s, idx + 1, len, prev, c + 1, out, out_idx);
    }
    else
    {
        count(prev, c, out, out_idx);
        compress(s, idx + 1, len, curr, 1, out, out_idx);
    }
}
void compress_string(const char *s, char *out)
{
    int len = (int)strlen(s);
    if (len == 0)
    {
        out[0] = '\0';
        return;
    }
    int out_idx = 0;
    compress(s, 1, len, s[0], 1, out, &out_idx);
}
int main()
{
    char input[500];
    char output[500];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    compress_string(input, output);
    printf("Compressed string: %s\n", output);
    return 0;
}