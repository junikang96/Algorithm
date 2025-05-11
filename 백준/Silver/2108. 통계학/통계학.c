#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int N, sum = 0;
    scanf("%d", &N);
    int arr[500001] = {};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    qsort(arr, N, sizeof(int), compare);

    int avg = 0, med = 0, mode = 0, range = 0;
    avg = (int)round((double)sum / N);
    med = arr[N / 2];
    range = arr[N - 1] - arr[0];

    int count[8001] = {};
    int max_count = 0;
    for (int i = 0; i < N; i++)
    {
        int temp = arr[i] + 4000;
        count[temp]++;
        if (count[temp] > max_count)
        {
            max_count = count[temp];
        }
    }

    int mode_arr[8001];
    int mode_count = 0;

    for (int i = 0; i < 8001; i++)
    {
        if (count[i] == max_count)
        {
            mode_arr[mode_count] = i - 4000; // 원래 숫자로 복구
            mode_count++;
        }
    }

    if (mode_count == 1)
    {
        mode = mode_arr[0];
    }
    else
    {
        mode = mode_arr[1];
    }

    printf("%d\n", avg);
    printf("%d\n", med);
    printf("%d\n", mode);
    printf("%d\n", range);

    return 0;
}