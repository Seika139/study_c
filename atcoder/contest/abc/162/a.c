#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 == 7)
        {
            printf("Yes\n");
            return 0;
        }
        n /= 10;
    }
    printf("No\n");
    return 0;
}
