#include <stdio.h>

int main(void)
{
    char input[8];
    scanf("%s", input);
    int arr[10] = {};

    // 같은 숫자가 몇 개인지 파악해야 함
    for (int i = 0; input[i] != '\0'; i++)
    {
        arr[input[i] - '0']++;
    }

    int temp = arr[6] + arr[9];
    if (temp % 2 == 0)
        arr[6] = temp / 2;
    else
        arr[6] = temp / 2 + 1;
    arr[9] = 0;

    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d\n", max);

    return 0;
}