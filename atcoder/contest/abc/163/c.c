#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        a[x - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
