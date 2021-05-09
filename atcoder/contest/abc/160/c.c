#include <stdio.h>

int main(void)
{
    int k, n;
    scanf("%d %d", &k, &n);
    int max = 0;
    int a_0 = 0;
    int a[2] = {0, 0};
    for (int i = 0; i < n; i++)
    {
        a[0] = a[1];
        scanf("%d", &a[1]);
        if (i == 0)
        {
            a_0 = a[1];
        }
        if (max < a[1] - a[0])
            max = a[1] - a[0];
    }
    if (max < k - a[1] + a_0)
        max = k - a[1] + a_0;
    printf("%d\n", k - max);
    return 0;
}
