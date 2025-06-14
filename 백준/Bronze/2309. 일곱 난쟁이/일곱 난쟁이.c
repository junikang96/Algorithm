#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int height[9] = {};
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &height[i]);
        sum += height[i];
    }

    qsort(height, 9, sizeof(int), compare);

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - height[i] - height[j] == 100)
            {
                for(int k = 0; k < 9; k++)
                {
                    if(k != i && k != j)
                        printf("%d\n", height[k]);
                }
                return 0;
            }
        }
    }

    return 0;
}