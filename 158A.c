#include <stdio.h>
int main()
{
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    int d[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &d[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (d[i] >= d[b - 1] && d[i] > 0)
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}