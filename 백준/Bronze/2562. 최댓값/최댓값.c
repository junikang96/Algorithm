#include <stdio.h>

int main(void)
{
    int arr[10] = {};
    for(int i=0;i<9;i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_num = 0, max_turn = 0;

    for(int j=0; j<9; j++)
    {
        if(arr[j] >= max_num)
        {
            max_num = arr[j];
            max_turn = j + 1;
        }
    }

    printf("%d\n", max_num);
    printf("%d\n", max_turn);
    return 0;
}