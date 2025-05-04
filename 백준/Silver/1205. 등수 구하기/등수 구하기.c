#include <stdio.h>

int calc_rank(int *scores, int N, int new_score, int P)
{
    int rank = 1;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (scores[i]> new_score)
        {
            rank++;
        }
        else if (scores[i] == new_score)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if ( N == P && scores[N - 1] >= new_score) // 랭킹이 꽉 차고, 꼴찌보다 점수가 낮거나 같으면 갱신 불가
    {
        return -1;
    }
    else
    {
        return rank;
    }
}

int main(void)
{
    int N, new_score, P;
    scanf("%d %d %d", &N, &new_score, &P);

    int scores[51] = {};

    if (N > 0)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &scores[i]);
        }
    }

    int result = calc_rank(scores, N, new_score, P);
    printf("%d\n", result);
    return 0;
}