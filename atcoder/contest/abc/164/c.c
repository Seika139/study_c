#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_asc(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    char s[n][11];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }

    // sの要素を昇順に並べ替える
    qsort(s, n, 11, str_asc);

    for (int i = 0; i < n - 1; i++)
    {
        if (strcmp(s[i], s[i + 1]) != 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
