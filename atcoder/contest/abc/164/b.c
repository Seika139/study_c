#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    while (1)
    {
        c -= b;
        if (c <= 0)
        {
            printf("Yes\n");
            return 0;
        }
        a -= d;
        if (a <= 0)
        {
            printf("No\n");
            return 0;
        }
    }
}
