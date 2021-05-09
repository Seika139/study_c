#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] * 4 * m >= sum)
        {
            count++;
        }
    }

    if (count < m)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}
