#include <stdio.h>

int main(void)
{
    long n, k;
    scanf("%ld %ld", &n, &k);
    long a, b;
    a = n % k;
    b = -(n % k - k);
    if (a > b)
    {
        printf("%ld\n", b);
    }
    else
    {
        printf("%ld\n", a);
    }
    return 0;
}
