#include <stdio.h>
#include <string.h>


typedef struct{
    int x;
    int y;
}baechu;

int map[50][50];
int visited[50][50];

void dfs(int x, int y, int M, int N)
{
    visited[y][x] = 1;

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < M && ny >= 0 && ny < N)
        {
            if(map[ny][nx] == 1 && visited[ny][nx] == 0)
            {
                dfs(nx, ny, M, N);
            }
        }
    }
}

int main(void)
{
    int T;
    scanf("%d", &T);

    baechu list[2500]; 


    while(T--)
    {
        int M, N, K;
        scanf("%d %d %d", &M, &N, &K);

        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < K; i++)
        {
            scanf("%d %d", &list[i].x, &list[i].y);
            map[list[i].y][list[i].x] = 1;
        }

        int worm = 0;
        for (int y = 0; y < N; y++)
        {
            for (int x = 0; x < M; x++)
            {
                if (map[y][x] == 1 && visited[y][x] == 0)
                {
                    dfs(x, y, M, N);
                    worm++;
                }
            }
        }
        printf("%d\n", worm);
    }
    return 0;
}