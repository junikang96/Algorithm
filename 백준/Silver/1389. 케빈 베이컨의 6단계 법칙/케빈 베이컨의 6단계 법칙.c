#include <stdio.h>
#include <limits.h>

int N, M;
int arr[101][101];

int queue[5001];
int front, rear;

int bfs(int start)
{
    int visited[101] = {};
    front = rear = 0;
    queue[rear] = start;
    rear++;
    visited[start] = 1;

    int sum = 0;

    while (front < rear)
    {
        int current = queue[front];
        front++;
        for (int i = 1; i <= N; i++)
        {
            if (arr[current][i] != 0 && visited[i] == 0)
            {
                visited[i] = visited[current] + 1;
                queue[rear] = i;
                rear++;
                sum += (visited[i] - 1);
            }
        }
    }

    return sum;
}

int main(void)
{
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a][b] = arr[b][a] = 1;
    }

    int min = INT_MAX;
    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        int ret = bfs(i);
        if (ret < min)
        {
            min = ret;
            ans = i;
        }
    }

    printf("%d\n", ans);
    return 0;
}