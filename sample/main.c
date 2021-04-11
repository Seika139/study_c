#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("input two integers");
    printf("int1 : ");
    scanf("%d", &n1);
    printf("int2 : ");
    scanf("%d", &n2);

    printf("diff : %d\n", n1 - n2);
    return 0;
}
