#include <stdio.h>

// returns the gcd of a and b
// https://o-treetree.hatenablog.com/entry/2020/05/14/230024

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
    int a = 14;
    int b = 21;
    int x[3] = {180, 244, 312};
    printf("%d\n", gcd(a, b));
    printf("%d\n", gcd_arr(x, 3));
}
