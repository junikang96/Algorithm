#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int order[101];
    int result[101] = {};

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &order[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int position = i - order[i];

        for (int j = i; j > position; j--)
        {
            result[j] = result[j - 1];
        }

        result[position] = i + 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
