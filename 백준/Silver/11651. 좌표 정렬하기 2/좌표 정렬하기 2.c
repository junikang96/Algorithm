#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coordinate;

int compare(const void *a, const void *b)
{
    coordinate *A = (coordinate *)a;
    coordinate *B = (coordinate *)b;

    if (A->y < B->y)
        return -1;
    else if (A->y > B->y)
        return 1;
    else
    {
        if (A->x < B->x)
            return -1;
        else if (A->x > B->x)
            return 1;
    }
    return 0;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    coordinate *xy;

    xy = (coordinate *)malloc(N * sizeof(coordinate));

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &xy[i].x, &xy[i].y);
    }

    qsort(xy, N, sizeof(xy[0]), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", xy[i].x, xy[i].y);
    }

    free(xy);

    return 0;
}