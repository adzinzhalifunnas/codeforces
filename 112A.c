#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }
        if (a[i] > b[i])
        {
            puts("1");
            return 0;
        }
        else if (a[i] < b[i])
        {
            puts("-1");
            return 0;
        }
        i++;
    }
    puts("0");
    return 0;
}