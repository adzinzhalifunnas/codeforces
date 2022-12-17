#include <stdio.h>
#include <string.h>
int anL(char *s)
{
    int i, j, count = 0;
    char *str = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i < strlen(str); i++)
        for (j = 0; j < strlen(s); j++)
        {
            if (str[i] == s[j])
            {
                count++;
                break;
            }
        }
    return count;
}
int main()
{
    char s[1000];
    scanf("%[^\n]", s);
    printf("%d\n", anL(s));
    return 0;
}