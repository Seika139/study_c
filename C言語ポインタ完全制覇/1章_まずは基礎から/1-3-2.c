#include <stdio.h>

int main(void)
{
    int alpha = 5;
    int beta = 10;
    int *alpha_p;

    // それぞれの変数のアドレスを表示する
    printf("&alpha   (alphaのアドレス)   .. %p\n", (void *)&alpha);
    printf("&beta    (betaのアドレス)    .. %p\n", (void *)&beta);
    printf("&alpha_p (alpha_pのアドレス) .. %p\n", (void *)&alpha_p);

    // ポインタ変数alpha_pにalphaのアドレスを代入する
    alpha_p = &alpha;
    printf("\nalpha    (alpha_pの値、つまり、alphaのアドレス)             .. %p\n", (void *)alpha_p);

    // alpha_pを経由してalphaの値を表示する
    printf("*alpha_p (alpha_pが指すオブジェクトの値、つまり、alphaの値) .. %d\n", *alpha_p);

    // alpha_pを経由してalphaの値を変更する
    *alpha_p = 15;
    printf("\nalpha (alphaの値) .. %d\n", alpha);

    return 0;
}
