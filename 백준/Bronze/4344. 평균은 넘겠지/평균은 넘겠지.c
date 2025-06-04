#include <stdio.h>

int main(void)
{
    int C, N;
    scanf("%d", &C);

    while (C--)
    {
        scanf("%d", &N);
        int score[1001] = {};
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &score[i]);
            sum += score[i];
        }

        float average = (float)sum / N;
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (score[i] > average)
            {
                count++;
            }
        }
        float result = (float)count * 100 / N;
        printf("%.3f%%\n", result);
    }

    return 0;
}