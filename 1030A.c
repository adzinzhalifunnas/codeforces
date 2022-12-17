#include <stdio.h>
int main()
{
    int a, b, c = 0;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d", &b);
        if (b == 1)
        {
            c++;
        }
    }
    if (c == 0)
    {
        puts("EASY");
    }
    else
    {
        puts("HARD");
    }
    return 0;
}