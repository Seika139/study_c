#include <stdio.h>

void get_xy(double *x_p, double *y_p)
{
    // 仮引数の値とアドレスを表示する
    printf("x_p  .. %p, y_p  .. %p\n", (void *)x_p, (void *)y_p);
    printf("&x_p .. %p, &y_p .. %p\n\n", (void *)&x_p, (void *)&y_p);

    // 引数で渡されたアドレスの値を格納する
    *x_p = 2.0;
    *y_p = 3.0;
}

int main(void)
{
    double x;
    double y;

    // x,yのアドレスを表示する
    printf("&x .. %p, &y .. %p\n\n", (void *)&x, (void *)&y);

    // 引数として変数x,yのアドレスを渡し、値を格納してもらう
    get_xy(&x, &y);

    // x,yの値を表示する
    printf("&x .. %f, &y .. %f\n", x, y);

    return 0;
}
