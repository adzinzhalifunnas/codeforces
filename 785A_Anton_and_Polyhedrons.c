#include <stdio.h>
#include <string.h>
long int anP(char *s)
{
    long int i, j, count = 0;
    char *str[] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    for (i = 0; i < 5; i++)
        for (j = 0; j < strlen(s); j++)
            if (strcmp(str[i], s) == 0)
            {
                if (i == 0)
                    count += 4;
                else if (i == 1)
                    count += 6;
                else if (i == 2)
                    count += 8;
                else if (i == 3)
                    count += 12;
                else
                    count += 20;
                break;
            }
    return count;
}
int main()
{
    long int n, i, count = 0;
    char s[100];
    scanf("%ld", &n);
    for (i = 0; i < n; i++)
        scanf("%s", s), count += anP(s);
    printf("%ld\n", count);
    return 0;
}