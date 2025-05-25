#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

Point queue[1000000];

int graph[1001][1001];
int visited[1001][1001];
int distance[1001][1001];

int n, m;

void bfs(int start_x, int start_y)
{
    int front = 0 , rear = 0;
    queue[rear] = (Point){start_x, start_y};
    rear++;
    visited[start_y][start_x] = 1;
    distance[start_y][start_x] = 0;

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

            if (nx >= 0 && nx < m && ny >= 0 && ny < n)
            {
                if (!visited[ny][nx] && graph[ny][nx] == 1)
                {
                    visited[ny][nx] = 1;
                    distance[ny][nx] = distance[current.y][current.x] + 1;
                    queue[rear] = (Point){nx, ny};
                    rear++;
                }
            }
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);

    int start_x, start_y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 2)
            {
                start_x = j;
                start_y = i;
            }
        }
    }

    bfs(start_x, start_y);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == 0)
            {
                printf("0 ");
            }
            else if (!visited[i][j])
            {
                printf("-1 ");
            }
            else
            {
                printf("%d ", distance[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}