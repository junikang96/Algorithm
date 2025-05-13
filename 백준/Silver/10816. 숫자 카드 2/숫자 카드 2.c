#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int lower_bound(int arr[], int size, int target)
{
    int left = 0, right = size;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int upper_bound(int arr[], int size, int target)
{
    int left = 0, right = size;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main(void)
{
    int N, M;
    scanf("%d", &N);

    int cards_A[500001] = {};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &cards_A[i]);
    }

    scanf("%d", &M);
    int cards_B[500001] = {};
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &cards_B[i]);
    }

    qsort(cards_A, N, sizeof(int), compare);

    for (int i = 0; i < M; i++)
    {
        int lb = lower_bound(cards_A, N, cards_B[i]);
        int ub = upper_bound(cards_A, N, cards_B[i]);
        int count = ub - lb;
        printf("%d ", count);
    }
    printf("\n");

    return 0;
}