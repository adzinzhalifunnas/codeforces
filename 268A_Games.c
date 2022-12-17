#include <stdio.h>
int games(int n, int h[], int g[])
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (h[i] == g[j])
                count++;
    return count;
}
int main()
{
    int n, i, h[100], g[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d%d", &h[i], &g[i]);
    printf("%d\n", games(n, h, g));
    return 0;
}