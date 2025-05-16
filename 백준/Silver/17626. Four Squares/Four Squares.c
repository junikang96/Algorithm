#include <stdio.h>

int dp[50000];

int min(int a, int b)
{
    return a < b ? a : b;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        dp[i] = i;
        for (int j = 1; j * j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    printf("%d\n", dp[n]);

    return 0;
}