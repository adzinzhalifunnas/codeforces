#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char c[4];
        scanf("%s", c);
        if (c[1] == '+')
        {
            b++;
        }
        else
        {
            b--;
        }
    }
    printf("%d", b);
    return 0;
}