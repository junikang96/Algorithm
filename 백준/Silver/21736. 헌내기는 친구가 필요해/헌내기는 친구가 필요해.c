#include <stdio.h>

int n, m, people;
int start_x = -1, start_y = -1;
int visited[600][600];
char map[601][601];

void dfs(int x, int y)
{
    visited[y][x] = 1;
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < m && ny >= 0 && ny < n)
        {
            if (map[ny][nx] != 'X' && visited[ny][nx] == 0)
            {
                if (map[ny][nx] == 'P')
                {
                    people++;
                }
                dfs(nx, ny);
            }
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", map[i]);
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 'I')
            {
                start_x = j;
                start_y = i;
            }
        }
    }

    if (start_x != -1 && start_y != -1)
    {
        dfs(start_x, start_y);
    }

    if (people == 0)
    {
        printf("TT\n");
    }
    else
    {
        printf("%d\n", people);
    }

    return 0;
}