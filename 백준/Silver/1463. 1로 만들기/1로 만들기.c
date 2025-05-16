#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int dp[1000001];
    dp[1] = 0;

    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if (i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    printf("%d\n", dp[N]);
    return 0;
}
