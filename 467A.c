#include <stdio.h>
int main()
{
    int a, b, c, d = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d%d", &b, &c);
        if (b + 2 <= c)
        {
            d++;
        }
    }
    printf("%d\n", d);
    return 0;
}