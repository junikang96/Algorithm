#include <stdio.h>

int main(void)
{
    int W, H;
    scanf("%d %d", &W, &H);

    float S = 0.5 * W * H;
    printf("%.1f\n", S);

    return 0;
}