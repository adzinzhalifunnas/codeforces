#include <stdio.h>
int aoTG(int n, int a[])
{
    int i, j, max = 0, min = 100, max_i = 0, min_i = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_i = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            min_i = i;
        }
    }
    if (max_i > min_i)
    {
        count = max_i + (n - 1 - min_i) - 1;
    }
    else
    {
        count = max_i + (n - 1 - min_i);
    }
    return count;
}
int main()
{
    int n, i, a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n", aoTG(n, a));
    return 0;
}