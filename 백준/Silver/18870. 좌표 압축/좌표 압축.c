#include <stdio.h>
#include <stdlib.h>

int n;
int arr[1000000];

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int binary_search(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main(void)
{
    scanf("%d", &n);
    int sorted[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sorted[i] = arr[i];
    }

    qsort(sorted, n, sizeof(int), compare);

    int unique[1000000];
    int unique_size = 0;

    for(int i=0;i<n;i++)
    {
        if(i == 0 || sorted[i] != sorted[i-1])
        {
            unique[unique_size] = sorted[i];
            unique_size++;
        }
    }
    for(int i=0; i<n;i++)
    {
        int ret = binary_search(unique, unique_size, arr[i]);
        printf("%d ", ret);
    }
    printf("\n");

    return 0;
}