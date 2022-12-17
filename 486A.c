#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    (a % 2 == 0) ? printf("%lld\n", a / 2) : printf("%lld\n", -(a + 1) / 2);
    return 0;
}