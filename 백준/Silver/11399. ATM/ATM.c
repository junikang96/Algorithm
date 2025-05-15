#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int time[1000] = {};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &time[i]);
    }

    qsort(time, N, sizeof(int), compare);
    int sum[1000] = {
        time[0],
    };
    int result = time[0];
    for (int i = 1; i < N; i++)
    {
        sum[i] = sum[i - 1] + time[i];
        result += sum[i];
    }

    printf("%d\n", result);

    return 0;
}