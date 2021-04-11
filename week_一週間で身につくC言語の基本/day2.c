#include <stdio.h>

int main(void)
{
    int i1 = 1;
    float f1 = 0.1;
    /*
    * 変数の初期化の位置
    * 変数の宣言をする場所は必ず{}の先頭の部分で行わなくてはならない
    * 何らかの処理が行われた後で変数を定義すると、エラーになる
    */

    printf("fi * 10 = %f\n", f1 * 10);
    printf("fi * 10 = %d\n", (int)(f1 * 10));
}
