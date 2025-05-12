#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int custom_round(double x)
{
    return (int)(x + 0.5);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int level_data[300000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &level_data[i]);
    }

    qsort(level_data, n, sizeof(int), compare);

    int cut = custom_round(n * 0.15);
    long long sum = 0;

    for (int i = cut; i < n - cut; i++) {
        sum += level_data[i];
    }

    int result = custom_round((double)sum / (n - 2 * cut));
    printf("%d\n", result);

    return 0;
}
