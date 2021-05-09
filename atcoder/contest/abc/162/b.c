#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    long sum = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            sum += i;
        }
    }
    printf("%ld\n", sum);
    return 0;
}
