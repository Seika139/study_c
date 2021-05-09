#include <stdio.h>

int main(void)
{
    long x;
    scanf("%ld", &x);
    long v500 = x / 500;
    long v5 = (x - v500 * 500) / 5;
    printf("%ld\n", v500 * 1000 + v5 * 5);
    return 0;
}
