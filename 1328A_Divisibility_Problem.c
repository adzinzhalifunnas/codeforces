#include <stdio.h>
unsigned long long int divisibilityProblem(unsigned long long int a, unsigned long long int b)
{
    unsigned long long int count = 0;
    if (a % b == 0)
    {
        return count;
    }
    else
    {
        count = b - (a % b);
        return count;
    }
}
int main()
{
    unsigned long long int t, a, b;
    scanf("%llu", &t);
    while (t--)
    {
        scanf("%llu%llu", &a, &b);
        printf("%llu\n", divisibilityProblem(a, b));
    }
    return 0;
}