#include <stdio.h>
unsigned long long int hTL(unsigned long long int n, unsigned long long int count)
{
    if (n == 0)
        return count;
    else if (n >= 100)
    {
        count += n / 100;
        n = n % 100;
        return hTL(n, count);
    }
    else if (n >= 20)
    {
        count += n / 20;
        n = n % 20;
        return hTL(n, count);
    }
    else if (n >= 10)
    {
        count += n / 10;
        n = n % 10;
        return hTL(n, count);
    }
    else if (n >= 5)
    {
        count += n / 5;
        n = n % 5;
        return hTL(n, count);
    }
    else
    {
        count += n;
        n = 0;
        return hTL(n, count);
    }
}
int main()
{
    unsigned long long int n, count = 0;
    scanf("%llu", &n);
    printf("%llu\n", hTL(n, count));
    return 0;
}