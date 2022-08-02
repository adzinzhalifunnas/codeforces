#include <stdio.h>
int main()
{
    int a, b = 0, c = 0;
    char d[100000];
    scanf("%d%s", &a, d);
    for (int i = 0; i < a; i++)
    {
        if (d[i] == 'A')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if (b > c)
    {
        puts("Anton");
    }
    else if (b < c)
    {
        puts("Danik");
    }
    else
    {
        puts("Friendship");
    }
    return 0;
}