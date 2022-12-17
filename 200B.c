#include <stdio.h>
int main()
{
    int n;
    float a[100], b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        b += a[i];
    }
    printf("%f\n", b / n);
    return 0;
}