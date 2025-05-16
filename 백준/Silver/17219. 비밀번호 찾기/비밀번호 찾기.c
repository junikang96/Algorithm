#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char address[21];
    char password[21];
} pair;

int compare(const void *a, const void *b)
{
    return strcmp(((pair *)a)->address, ((pair *)b)->address);
}

int binary_search(pair list[], char *target, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int cmp = strcmp(list[mid].address, target);

        if (cmp == 0)
        {
            return mid;
        }
        else if (cmp < 0)
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
    pair list[100000];

    for (int i = 0; i < N; i++)
    {
        scanf("%s %s", list[i].address, list[i].password);
    }

    qsort(list, N, sizeof(list[0]), compare);

    char *forgot_address[M];

    for (int i = 0; i < M; i++)
    {
        forgot_address[i] = (char *)malloc(21 * sizeof(char));
        scanf("%s", forgot_address[i]);
    }

    for (int i = 0; i < M; i++)
    {
        int ret = binary_search(list, forgot_address[i], N);
        if (ret != -1)
        {
            printf("%s\n", list[ret].password);
        }
    }

    return 0;
}