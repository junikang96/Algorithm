#include <stdio.h>

typedef struct
{
    int priority;
    int index;
} Doc;

int main(void)
{
    int K, N, M;
    scanf("%d", &K);
    
    for (int i = 0; i < K; i++)
    {
        int front = 0, rear = 0;
        int count = 0;
        int priority_count[10] = {0}; // 우선순위별 카운트 (0~9)
        Doc queue[10000]; // 더 큰 크기로 배열 확장
        
        scanf("%d %d", &N, &M);

        for (int j = 0; j < N; j++)
        {
            int num;
            scanf("%d", &num);
            queue[rear].priority = num;
            queue[rear].index = j;
            priority_count[num]++; // 해당 우선순위의 문서 개수 증가
            rear++;
        }

        while (front < rear)
        {
            Doc temp = queue[front];
            front++;

            // 현재 문서보다 높은 우선순위 문서가 있는지 확인
            int has_higher_priority = 0;
            for (int p = temp.priority + 1; p <= 9; p++)
            {
                if (priority_count[p] > 0)
                {
                    has_higher_priority = 1;
                    break;
                }
            }

            if (has_higher_priority)
            {
                // 더 높은 우선순위 문서가 있으면 뒤로 보냄
                queue[rear] = temp;
                rear++;
            }
            else
            {
                // 현재 문서를 인쇄 (우선순위 카운트 감소)
                priority_count[temp.priority]--;
                count++;
                if (temp.index == M)
                {
                    printf("%d\n", count);
                    break;
                }
            }
        }
    }

    return 0;
}