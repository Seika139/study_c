#include <stdio.h>
#include <stdlib.h>

int global_variable;
static int file_static_variable;

void func1(void)
{
    int func1_variable;
    static int local_static_variable;

    printf("&func1_variable .. %p\n", (void *)&func1_variable);
    printf("&local_static_variable .. %p\n", (void *)&local_static_variable);
}

void func2(void)
{
    int func2_variable;
    printf("&func2_variable .. %p\n", (void *)&func2_variable);
}

int main(void)
{
    int *p;

    // 関数へのポインタの表示
    printf("func1 .. %p\n", (void *)func1);
    printf("func2 .. %p\n", (void *)func2);

    // 文字列リテラルのアドレス表示
    printf("string literal .. %p\n", (void *)"abc");

    // グローバル変数のアドレス表示
    printf("&global_variable .. %p\n", (void *)&global_variable);

    // ファイル内static変数のアドレス表示
    printf("&file_static_variable .. %p\n", (void *)&file_static_variable);

    // ローカル変数の表示
    func1();
    func2();

    // malloc()により確保した領域のアドレス
    p = malloc(sizeof(int));
    printf("malloc address .. %p\n", (void *)p);

    return 0;
}
