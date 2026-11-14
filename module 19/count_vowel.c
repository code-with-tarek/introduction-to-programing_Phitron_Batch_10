#include <stdio.h>
#include <string.h>
int fun(char s[], int len, int index)
{
    if (index == len)
    {
        return 0;
    }
    int count = 0;
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
    {
        count = 1;
    }
    else if (s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
    {
        count = 1;
    }
    int total_count = count + fun(s, len, index + 1);
    return total_count;
    // printf("%s %d", s, len);
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int len = strlen(s);
    int total_count = fun(s, len, 0);
    printf("%d\n", total_count);
    return 0;
}