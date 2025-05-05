#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int arr[10] = {};
    int remainder[10] = {};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        remainder[i] = arr[i] % 42;
    }

    qsort(remainder, 10, sizeof(int), compare);

    int index = 1;

    for (int i = 1; i < 10; i++)
    {
        if (remainder[i] != remainder[i - 1])
        {
            index++;
        }
    }

    printf("%d\n", index);
    return 0;
}