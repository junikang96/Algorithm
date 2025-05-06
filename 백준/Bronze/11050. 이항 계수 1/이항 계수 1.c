#include <stdio.h>

int factorial(int num)
{
    if (num <= 1)
        return 1;

    return num * factorial(num - 1);
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int ans = factorial(N) / (factorial(K) * factorial(N - K));
    printf("%d\n", ans);

    return 0;
}