#include <stdio.h>
int main()
{
    int n, a, b, c, d, i;
    scanf("%d", &n);
    c = 0;
    d = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        c = c - a + b;
        if (c > d)
        {
            d = c;
        }
    }
    printf("%d\n", d);
    return 0;
}