#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[21];
    int index;
} poketmon;

int compare(const void *a, const void *b)
{
    return strcmp(((poketmon *)a)->name, ((poketmon *)b)->name);
}

int binary_search(poketmon arr[], char *target, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int cmp = strcmp(arr[mid].name, target);
        if (cmp == 0)
        {
            return arr[mid].index;
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

    char *num_to_name[100001];
    poketmon namelist[100001];

    char temp[21];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", temp);
        num_to_name[i + 1] = strdup(temp); 
        strcpy(namelist[i].name, temp);
        namelist[i].index = i + 1;
    }

    qsort(namelist, N, sizeof(namelist[0]), compare);

    for (int i = 0; i < M; i++)
    {
        scanf("%s", temp);
        if (isdigit(temp[0]))
        {
            int num = atoi(temp);
            printf("%s\n", num_to_name[num]);
        }
        else
        {
            int ret = binary_search(namelist, temp, N);
            printf("%d\n", ret);
        }
    }

    return 0;
}
