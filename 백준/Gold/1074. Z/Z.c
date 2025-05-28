#include <stdio.h>
#include <math.h>

int N, r, c, count;

void search(int size, int x, int y)
{
    if (size == 1)
        return;

    int half = size / 2;
    int area = half * half;

    if (r < x + half && c < y + half)
    {
        search(half, x, y);
    }
    else if (r < x + half && c >= y + half)
    {
        count += area;
        search(half, x, y + half);
    }
    else if (r >= x + half && c < y + half)
    {
        count += area * 2;
        search(half, x + half, y);
    }
    else
    {
        count += area * 3;
        search(half, x + half, y + half);
    }
}

int main(void)
{
    scanf("%d %d %d", &N, &r, &c);
    int s = pow(2, N);

    search(s, 0, 0);
    printf("%d\n", count);

    return 0;
}