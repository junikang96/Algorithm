#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

int binary_search(char *arr[], int size, char *target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (!strcmp(arr[mid], target))
        {
            return mid;
        }
        else if (strcmp(arr[mid], target) < 0)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    char *name1[N], *name2[M], result[N][21];

    for (int i = 0; i < N; i++)
    {
        name1[i] = (char*)malloc(21 * sizeof(char));
        scanf("%s", name1[i]);
    }

    for (int i = 0; i < M; i++)
    {
        name2[i] = (char*)malloc(21 * sizeof(char));
        scanf("%s", name2[i]);
    }

    qsort(name1, N, sizeof(char *), compare);
    qsort(name2, M, sizeof(char *), compare);

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        int ret = binary_search(name2, M, name1[i]);
        if (ret != -1)
        {
            strcpy(result[count], name1[i]);
            count++;
        }
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", result[i]);
    }

    return 0;
}