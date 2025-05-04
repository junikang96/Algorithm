#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double round2(double x) {
    return round(x * 100) / 100.0;
}

void corrected_average(int N, int K, double *scores) {
    double trimmed_sum = 0.0, adjusted_sum = 0.0;
    double trimmed_avg, adjusted_avg;

    for (int i = K; i < N - K; i++) {
        trimmed_sum += scores[i];
    }
    trimmed_avg = trimmed_sum / (N - 2 * K);
    printf("%.2f\n", round2(trimmed_avg));

    double adjusted_scores[100000];
    memcpy(adjusted_scores, scores, sizeof(double) * N);

    for (int i = 0; i < K; i++) {
        adjusted_scores[i] = scores[K];
        adjusted_scores[N - 1 - i] = scores[N - K - 1];
    }
    for (int i = 0; i < N; i++) {
        adjusted_sum += adjusted_scores[i];
    }
    adjusted_avg = adjusted_sum / N;
    printf("%.2f\n", round2(adjusted_avg));
}

int compare(const void *a, const void *b) {
    double da = *(const double *)a;
    double db = *(const double *)b;
    if (da < db) return -1;
    if (da > db) return 1;
    return 0;
}

int main(void) {
    int N, K;
    double scores[100000];

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &scores[i]);
    }

    qsort(scores, N, sizeof(double), compare);
    corrected_average(N, K, scores);
    return 0;
}
