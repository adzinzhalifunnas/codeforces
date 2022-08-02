#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d", &a);
    char c[a];
    scanf("%s", c);
    for (int i = 0; i < a; i++)
    {
        if (c[i] == c[i + 1])
        {
            b++;
        }
    }
    printf("%d\n", b);
    return 0;
}