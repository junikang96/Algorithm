#include <stdio.h>

int digit_sum(int N)
{
    int sum = 0;
    while (N > 0)
    {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        if (i + digit_sum(i) == N)
        {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("0\n"); // 생성자 없는 경우
    return 0;
}