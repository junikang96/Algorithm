#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr1[8] = {};
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr3[8] = {8, 7, 6, 5, 4, 3, 2, 1};

    if (!memcmp(arr1, arr2, sizeof(arr2)))
    {
        printf("ascending\n");
    }
    else if (!memcmp(arr1, arr3, sizeof(arr3)))
    {
        printf("descending\n");
    }
    else
    {
        printf("mixed\n");
    }
    return 0;
}