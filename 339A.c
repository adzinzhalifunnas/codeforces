#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int b = strlen(a);
    for (int i = 0; i < b; i += 2)
    {
        for (int j = 0; j < b; j += 2)
        {
            if (a[i] < a[j])
            {
                char c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    printf("%s\n", a);
    return 0;
}