#include <stdio.h>

typedef struct
{
    int x, y;
} Point;

int M, N;
Point queue[1000001];
int front, rear;

int visited[1001][1001];
int tomato[1001][1001];

int bfs()
{
    front = rear = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomato[i][j] == 1)
            {
                queue[rear] = (Point){j, i};
                rear++;
                visited[i][j] = 1;
            }
        }
    }

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

            if (nx >= 0 && nx < M && ny >= 0 && ny < N)
            {
                if (!visited[ny][nx] && tomato[ny][nx] == 0)
                {
                    visited[ny][nx] = visited[current.y][current.x] + 1;
                    queue[rear] = (Point){nx, ny};
                    rear++;
                }
            }
        }
    }

    int max_days = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomato[i][j] == 0 && visited[i][j] == 0)
            {
                return -1;
            }

            if (visited[i][j] > max_days)
            {
                max_days = visited[i][j];
            }
        }
    }

    return max_days - 1;
}

int main(void)
{
    scanf("%d %d", &M, &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &tomato[i][j]);
        }
    }

    int ret = bfs();
    printf("%d\n", ret);

    return 0;
}