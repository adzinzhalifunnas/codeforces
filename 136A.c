#include <stdio.h>
int main()
{
    int a, b, c[100], d[100];
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        scanf("%d", &c[b]);
        d[c[b]] = b;
    }
    for (b = 1; b <= a; b++)
    {
        printf("%d ", d[b]);
    }
    puts("");
    return 0;
}