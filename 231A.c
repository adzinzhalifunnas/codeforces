#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int c, d, e;
        scanf("%d%d%d", &c, &d, &e);
        if (c + d + e >= 2)
        {
            b++;
        }
    }
    printf("%d", b);
    return 0;
}