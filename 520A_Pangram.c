#include <stdio.h>
#include <string.h>
char *isPangram(char *s)
{
    int i, j, count = 0;
    char *str = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i < strlen(str); i++)
        for (j = 0; j < strlen(s); j++)
        {
            if (s[j] >= 65 && s[j] <= 90)
                s[j] += 32;
            if (str[i] == s[j])
            {
                count++;
                break;
            }
        }
    (count == 26) ? (str = "YES") : (str = "NO");
    return str;
}
int main()
{
    int n;
    char s[100];
    scanf("%d", &n);
    scanf("%s", s);
    printf("%s\n", isPangram(s));
    return 0;
}