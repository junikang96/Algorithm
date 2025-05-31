#include <stdio.h>

int count = 0;

int is_hansu(int N)
{
    int a, b, c;

    if (N < 100)
        return 1;

    a = N / 100;
    b = (N % 100) / 10;
    c = N % 10;

    if ((a - b) == (b - c))
        return 1;

    return -1;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (is_hansu(i) == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}