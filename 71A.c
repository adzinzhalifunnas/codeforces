#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char b[120];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", b);
        if (strlen(b) > 10)
        {
            printf("%c", b[0]);
            printf("%d", (strlen(b) - 2));
            printf("%c\n", b[strlen(b) - 1]);
        }
        else
        {
            printf("%s\n", b);
        }
    }
    return 0;
}