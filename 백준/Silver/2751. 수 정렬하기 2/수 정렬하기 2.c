#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int arr[1000001] = {};
    for(int i=0;i<N;i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);

    for(int i=0;i<N;i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}