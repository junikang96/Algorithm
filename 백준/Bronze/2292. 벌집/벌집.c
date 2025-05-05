#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int layer = 1;
    int maxnum_layer = 1;

    while (N > maxnum_layer)
    {
        maxnum_layer += 6 * layer;
        layer++;
    }

    printf("%d\n", layer);
    return 0;
}
