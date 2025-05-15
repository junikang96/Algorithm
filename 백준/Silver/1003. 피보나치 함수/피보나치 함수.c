#include <stdio.h>

int main()
{
    int T, n;
    scanf("%d", &T);

    int arr[41][2] = {0}; // arr[i][0] : i일 때 0의 출력횟수

    arr[0][0] = 1;
    arr[0][1] = 0;

    arr[1][0] = 0;
    arr[1][1] = 1;

    for (int i = 2; i <= 40; i++)
    {
        arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
        arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
    }

    while (T--)
    {
        scanf("%d", &n);
        printf("%d %d\n", arr[n][0], arr[n][1]);
    }

    return 0;
}
