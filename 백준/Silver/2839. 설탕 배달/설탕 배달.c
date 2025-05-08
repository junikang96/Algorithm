#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int num = 0;

    while (1)
    {
        if (N % 5 == 0)
        {
            num += N / 5;
            break;
        }
        N -= 3;
        num++;

        if (N < 0)
        {
            num = -1;
            break;
        }
    }

    printf("%d\n", num);

    return 0;
}
