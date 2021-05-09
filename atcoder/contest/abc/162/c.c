#include <stdio.h>

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int gcd_arr(int a[], int n)
{
    if (n == 2)
    {
        return gcd(a[0], a[1]);
    }
    else
    {
        a[n - 2] = gcd(a[n - 2], a[n - 1]);
        return gcd_arr(a, n - 1);
    }
}

int main(void)
{
    int k;
    scanf("%d", &k);
    int ans = 0;

    for (int i = 1; i < k + 1; i++)
    {
        for (int j = 1; j < k + 1; j++)
        {
            for (int l = 1; l < k + 1; l++)
            {
                int x[3] = {i, j, l};
                ans += gcd_arr(x, 3);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
