#include <stdio.h>

/* 引数に1.0を足して表示する関数 */
void func1(double d)
{
    printf("func1: d + 1.0 = %f\n", d + 1.0);
}

/* 引数に2.0を足して表示する関数 */
void func2(double d)
{
    printf("func2: d + 2.0 = %f\n", d + 2.0);
}

int main(void)
{
    void (*func_p)(double);

    func_p = func1;
    func_p(1.0); // func1を実行している

    func_p = func2;
    func_p(1.0); // func2を実行している

    return 0;
}
