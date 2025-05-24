#include <stdio.h>
#include <stdbool.h>

int N, M;
int adj[1001][1001];
bool visited[1001];

void dfs(int v)
{
    visited[v] = true;

    for (int i = 1; i <= N; i++)
    {
        if (adj[v][i] && !visited[i])
        {
            dfs(i);
        }
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);

    int u, v;
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1;
    }

    int count = 0;

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}