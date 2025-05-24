#include <stdio.h>

int arr[128][128];
int white = 0, blue = 0;

int is_same_color(int x, int y, int size)
{
    int color = arr[x][y];
    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (arr[i][j] != color)
            {
                return 0;
            }
        }
    }
    return 1;
}

void calc_paper(int x, int y, int size)
{
    if (is_same_color(x, y, size))
    {
        if (arr[x][y] == 0)
            white++;
        else
            blue++;
        return;
    }

    int new_size = size / 2;
    calc_paper(x, y, new_size);
    calc_paper(x, y + new_size, new_size);
    calc_paper(x + new_size, y, new_size);
    calc_paper(x + new_size, y + new_size, new_size);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    calc_paper(0, 0, n);

    printf("%d\n", white);
    printf("%d\n", blue);

    return 0;
}