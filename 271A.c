#include <stdio.h>
int main()
{
    int e;
    scanf("%d", &e);
    while (1)
    {
        e += 1;
        int a = e / 1000;
        int b = e / 100 % 10;
        int c = e / 10 % 10;
        int d = e % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d\n", e);
    return 0;
}