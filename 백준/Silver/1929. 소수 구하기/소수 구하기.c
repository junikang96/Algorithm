#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = N; i <= M; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}