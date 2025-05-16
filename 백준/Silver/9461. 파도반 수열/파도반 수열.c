#include <stdio.h>

long long dp[101];

int main(void)
{
    int T, N;
    scanf("%d", &T);

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    int max = 5;

    while (T--)
    {
        scanf("%d", &N);
        for (int i = max +1 ; i <= N; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 5];
        }

        if(N > max)
        {
            max = N;
        }
        printf("%lld\n", dp[N]);
    }
    return 0;
}