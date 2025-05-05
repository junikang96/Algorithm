#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    int cards[100] = {};
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &cards[i]);
    }

    int ans = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= M && sum > ans)
                {
                    ans = sum;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
