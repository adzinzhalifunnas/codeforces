#include <stdio.h>
int main()
{
    int n, h, a[1000], i, c = 0;
    scanf("%d%d", &n, &h);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > h)
        {
            c++;
        }
    }
    printf("%d\n", n + c);
    return 0;
}