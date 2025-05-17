#include <stdio.h>

int graph[1001][1001];
int visited[1001];

int queue[1001];
int front = 0, rear = 0;

void dfs(int v, int n)
{
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 1; i <= n; i++)
    {
        if (graph[v][i] == 1 && visited[i] == 0)
        {
            dfs(i, n);
        }
    }
}

void bfs(int v, int n)
{
    front = rear = 0;
    visited[v] = 1;
    queue[rear] = v;
    rear++;

    while (front < rear)
    {
        int current = queue[front];
        front++;
        printf("%d ", current);

        for (int i = 1; i <= n; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear] = i;
                rear++;
            }
        }
    }
}

int main(void)
{
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);

    int a, b;
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        graph[a][b] = graph[b][a] = 1;
    }

    dfs(V, N);
    printf("\n");

    for (int i = 1; i <= N; i++)
    {
        visited[i] = 0;
    }

    bfs(V, N);
    printf("\n");

    return 0;
}