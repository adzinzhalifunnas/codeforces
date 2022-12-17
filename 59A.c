#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int b = 0, c = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if (b >= c)
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] = a[i] + 32;
            }
        }
    }
    else
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = a[i] - 32;
            }
        }
    }
    printf("%s\n", a);
    return 0;
}