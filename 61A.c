#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s%s", a, b);
    for (int i = 0; a[i]; i++)
    {
        printf("%d", a[i] != b[i]);
    }
    printf("%c", 10);
    return 0;
}