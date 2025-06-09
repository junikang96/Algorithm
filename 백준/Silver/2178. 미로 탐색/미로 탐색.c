#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

Point queue[10001];

char map[101][101];
int visited[101][101];
int distance[101][101];

void bfs(int target_x, int target_y)
{
    int front = 0, rear = 0;
    queue[rear] = (Point){1, 1};
    rear++;
    visited[1][1] = 1;
    distance[1][1] = 1;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while (front < rear)
    {
        Point current = queue[front];
        front++;

        for (int i = 0; i < 4; i++)
        {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 1 && nx <= target_x && ny >= 1 && ny <= target_y)
            {
                if (!visited[ny][nx] && map[ny - 1][nx - 1] == '1')
                {
                    visited[ny][nx] = 1;
                    distance[ny][nx] = distance[current.y][current.x] + 1;

                    if (nx == target_x && ny == target_y)
                        return;

                    queue[rear] = (Point){nx, ny};
                    rear++;
                }
            }
        }
    }
}

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", map[i]);
    }

    bfs(M, N);
    printf("%d\n", distance[N][M]);

    return 0;
}