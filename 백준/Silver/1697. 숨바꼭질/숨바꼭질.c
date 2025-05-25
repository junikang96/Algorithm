#include <stdio.h>

int visited[100001];
int queue[100001];
int front = 0, rear = 0;

int bfs(int start, int target)
{
    queue[rear] = start;
    rear++;
    visited[start] = 1;

    while (front < rear)
    {
        int curr = queue[front];
        front++;

        if (curr == target)
        {
            return (visited[curr] - 1);
        }

        int move[3] = {curr - 1, curr + 1, curr * 2};

        for (int i = 0; i < 3; i++)
        {
            int next = move[i];
            if (next >= 0 && next < 100001 && visited[next] == 0)
            {
                visited[next] = visited[curr] + 1;
                queue[rear] = next;
                rear++;
            }
        }
    }
    return -1;
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int ret = bfs(N, K);
    if (ret != -1)
    {
        printf("%d\n", ret);
    }

    return 0;
}