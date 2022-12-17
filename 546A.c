#include <stdio.h>
int main()
{
    int k, n, w, i, s = 0;
    scanf("%d%d%d", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        s += i * k;
    }
    if (s > n)
    {
        printf("%d", s - n);
    }
    else
    {
        printf("0");
    }
    return 0;
}