#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int S[200000] = {};
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &S[i]);
    }

    int fruit_count[10] = {}; // 전체 과일 종류별 갯수
    int left = 0, right = 0;
    int kind_fruit = 0; // 현재 배열의 과일 종류 갯수
    int max_len = 0;

    for(right = 0; right < N; right++)
    {
        int fruit = S[right];

        if(fruit_count[fruit] == 0)
        {
            kind_fruit++;
        } 
        fruit_count[fruit]++;

        while(kind_fruit > 2)
        {
            int left_fruit = S[left];
            fruit_count[left_fruit]--;
            if(fruit_count[left_fruit] == 0)
            {
                kind_fruit--;
            }
            left++;
        }

        if(right - left + 1 > max_len)
        {
            max_len = right - left + 1;
        }

    }

    printf("%d\n", max_len);

    return 0;
}