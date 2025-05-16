#include <stdio.h>
#define MAX 301

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n;
    int score[MAX], dp[MAX];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &score[i]);
    }

    dp[0] = 0;
    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    dp[3] = max(score[1] + score[3], score[2] + score[3]);

    for (int i = 4; i <= n; i++)
    {
        dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
    }

    printf("%d\n", dp[n]);
    return 0;
}
