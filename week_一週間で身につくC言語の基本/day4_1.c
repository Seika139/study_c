#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;

    // 前置と後置
    // a=i++;  a=i; i+=1; に該当
    // a=++i:  i+=1; a=i; に該当
}
