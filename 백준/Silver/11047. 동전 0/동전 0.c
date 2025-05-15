#include <stdio.h>

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    int value[10] = {};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &value[i]);
    }

    int remain = K;
    int count = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if(remain >= value[i])
        {
            count += remain / value[i];
            remain %= value[i];
        }
    }

    printf("%d\n", count);

    return 0;
}