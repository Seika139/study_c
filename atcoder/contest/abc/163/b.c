#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        n -= a[i];
    }
    if (n < 0)
    {
        n = -1;
    }
    printf("%d\n", n);
    return 0;
}
