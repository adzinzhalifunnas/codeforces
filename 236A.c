#include <stdio.h>
int main()
{
    char a[100];
    int b[26] = {0}, c = 0;
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (b[a[i] - 'a'] == 0)
        {
            b[a[i] - 'a'] = 1;
            c++;
        }
    }
    (c % 2 == 0) ? puts("CHAT WITH HER!") : puts("IGNORE HIM!");
    return 0;
}