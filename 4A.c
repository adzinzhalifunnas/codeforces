#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    (a % 2 == 0 && a > 2) ? puts("YES") : puts("NO");
    return 0;
}