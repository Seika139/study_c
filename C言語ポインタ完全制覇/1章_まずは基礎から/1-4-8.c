#include <stdio.h>

int main(void)
{
    int size1;
    int size2;
    int size3;

    printf("input 3 integers > ");
    scanf("%d%d%d", &size1, &size2, &size3);

    // 可変長配列の宣言
    int array1[size1];
    int array2[size2][size3];

    // 適当に値を代入する
    int i;
    for (i = 0; i < size1; i++)
    {
        array1[i] = i;
    }

    int j;
    for (i = 0; i < size2; i++)
    {
        for (j = 0; j < size3; j++)
        {
            array2[i][j] = i * size3 + j;
        }
    }

    // 代入された値を表示する
    for (i = 0; i < size1; i++)
    {
        printf("array1[%d] ... %d\n", i, array1[i]);
    }

    for (i = 0; i < size2; i++)
    {
        for (j = 0; j < size3; j++)
        {
            printf("\t%d", array2[i][j]);
        }
        printf("\n");
    }

    printf("sizeof(array1) .. %zd\n", sizeof(array1));
    printf("sizeof(array2) .. %zd\n", sizeof(array2));

    return 0;
}
