#include <stdio.h>
int main()
{
    long long int a, b = 0;
    scanf("%lld", &a);
    while (a)
    {
        if (a % 10 == 4 || a % 10 == 7)
        {
            b++;
        }
        a /= 10;
    }
    if (b == 4 || b == 7)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
    return 0;
}