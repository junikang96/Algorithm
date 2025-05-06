#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int k, n;
        scanf("%d %d", &k, &n);

        int people[15][15] = {0};

        for (int i = 1; i <= n; i++)
        {
            people[0][i] = i;
        }

        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                people[i][j] = people[i][j - 1] + people[i - 1][j];
            }
        }

        printf("%d\n", people[k][n]);
    }

    return 0;
}