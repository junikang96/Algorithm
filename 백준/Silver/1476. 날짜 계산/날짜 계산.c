#include <stdio.h>

int main(void)
{
    int E, S, M;
    scanf("%d %d %d", &E, &S, &M);
    int year = 1;
    int e = 1, s = 1, m = 1;

    while (1)
    {
        if (E == e && S == s && M == m)
        {
            printf("%d\n", year);
            break;
        }
        year++;
        e = e % 15 + 1;
        s = s % 28 + 1;
        m = m % 19 + 1;
    }

    return 0;
}