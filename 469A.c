#include <stdio.h>
int main()
{
    int n, p, q, a[100], i, j, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &j);
        a[j - 1] = 1;
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &j);
        a[j - 1] = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c++;
        }
    }
    if (c == n)
    {
        puts("I become the guy.");
    }
    else
    {
        puts("Oh, my keyboard!");
    }
    return 0;
}