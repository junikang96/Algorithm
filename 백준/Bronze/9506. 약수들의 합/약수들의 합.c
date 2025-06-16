#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void is_perfect_num(int num)
{
    int sum = 0;
    int arr[100001] = {};
    int index = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            arr[index++] = i;
        }
    }

    qsort(arr, index, sizeof(int), compare);

    if (sum == num)
    {
        printf("%d = ", num);
        for (int j = 0; j < index - 1; j++)
        {
            printf("%d + ", arr[j]);
        }
        printf("%d\n", arr[index - 1]);
    }
    else
    {
        printf("%d is NOT perfect.\n", num);
    }
}

int main(void)
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
            break;

        is_perfect_num(n);
    }

    return 0;
}