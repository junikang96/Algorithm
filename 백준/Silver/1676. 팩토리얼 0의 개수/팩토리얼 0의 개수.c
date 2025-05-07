#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int count = 0;

    for (int i = 2; i <= N; i++)
    {
        int temp = i;
        while (temp % 5 == 0)
        {
            temp /= 5;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}