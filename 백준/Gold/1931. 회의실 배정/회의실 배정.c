#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int start_t;
    int end_t;
} Meeting;

int compare(const void *a, const void *b)
{
    Meeting *m1 = (Meeting *)a;
    Meeting *m2 = (Meeting *)b;

    if (m1->end_t != m2->end_t)
    {
        return m1->end_t - m2->end_t;
    }
    else
    {
        return m1->start_t - m2->start_t;
    }
}

Meeting list[100001];

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &list[i].start_t, &list[i].end_t);
    }

    qsort(list, N, sizeof(Meeting), compare);

    int count = 1;
    int prev_time = list[0].end_t;

    for (int i = 1; i < N; i++)
    {
        if (prev_time <= list[i].start_t)
        {
            prev_time = list[i].end_t;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}