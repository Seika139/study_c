#include <stdio.h>

int main(void)
{
    int alpha;
    int *alpha_p;

    // alpha_pにalphaへのポインタを設定
    alpha_p = &alpha;

    // alpha_pの値を表示
    printf("alpha_p .. %p\n", (void *)alpha_p);

    // alpha_pに1を加算
    alpha_p++;
    printf("alpha_p .. %p\n", (void *)alpha_p);

    // alpha_pに3を加算
    alpha_p += 3;
    printf("alpha_p .. %p\n", (void *)alpha_p);

    // intのバイト数を表示
    printf("%lu\n", sizeof(int));

    return 0;
}
