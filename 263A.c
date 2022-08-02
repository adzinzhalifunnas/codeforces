#include <stdio.h>
#include <math.h>
int main()
{
    int a, b = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a);
            if (a == 1)
            {
                b = abs(i - 2) + abs(j - 2);
            }
        }
    }
    printf("%d", b);
    return 0;
}