#include <stdio.h>

int game_func(int N, int M, int L)
{
    int count[51] = {}; // 공을 받은 횟수 (1~N번) 0으로 초기화
    int current = 1; // 처음 공을 가진 사람은 1번
    int throw_count = 0;

    while(1)
    {
        count[current]++;
        if (count[current] == M)
        {
            break;
        }
        // 공을 받은 횟수가 홀수면 시계방향, 짝수면 반시계 방향
        if (count[current] % 2 == 1)
        {
            current = (current + L - 1) % N + 1;
        }
        else
        {
            current = (current - L - 1 + N) % N + 1;
        }

        throw_count++;
    }

    return throw_count;
}

int main(void)
{
    int N, M, L;
    scanf("%d %d %d", &N, &M, &L);

    printf("%d\n", game_func(N, M, L));
    return 0;
}