#include <stdio.h>

typedef struct
{
    int weight;
    int height;
} Bodysize;

int main(void)
{
    int N;
    scanf("%d", &N);

    Bodysize list[50];
    int rank[50];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &list[i].weight, &list[i].height);
    }

    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;
            if (list[j].weight > list[i].weight && list[j].height > list[i].height)
            {
                count++;
            }
        }
        rank[i] = count + 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", rank[i]);
    }

    return 0;
}
