#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int N;
    int current_score[1000] = {};

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &current_score[i]);
    }
    qsort(current_score, N, sizeof(int), compare);

    int max_score = current_score[N - 1];
    double new_score[1000] = {};
    double sum = 0;

    for (int i = 0; i < N; i++)
    {
        double ratio = (double)current_score[i] / max_score;
        new_score[i] = ratio * 100;
        sum += new_score[i];
    }
    double new_avg = (double)sum / N;
    printf("%f\n", new_avg);
    return 0;
}