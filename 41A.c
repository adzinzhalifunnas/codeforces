#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);
    int c = strlen(a);
    int d = strlen(b);
    int e = 0;
    if (c == d)
    {
        for (int i = 0; i < c; i++)
        {
            if (a[i] == b[d - i - 1])
            {
                e++;
            }
        }
    }
    (e == c) ? puts("YES") : puts("NO");
    return 0;
}