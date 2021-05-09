#include <stdio.h>

int is_rgb(const char *x, const char *y, const char *z)
{
    return *x != *y && *y != *z && *z != *x;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int R = 0;
    int G = 0;
    int B = 0;
    for (int i = 0; i < n; i++)
    {
        s[i] == 'R'   ? R++
        : s[i] == 'G' ? G++
                      : B++;
    }
    long ans = R * G * B;
    for (int d = 1; d * 2 < n; d++)
    {
        int w = 2 * d + 1;
        for (int i = 0; i <= n - w; i++)
        {
            if (is_rgb(&s[i], &s[i + d], &s[i + 2 * d]))
            {
                ans--;
            }
        }
    }
    printf("%ld\n", ans);
    return 0;
}
