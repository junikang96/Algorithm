#include <stdio.h>

void placement(int H, int W, int N, int M)
{
    int i= 0, j = 0;

    int width = 0, height = 0;

    while(i<W)
    {
        i = i + M + 1;
        width++;
    }
    while(j<H)
    {
        j = j + N + 1;
        height++;
    }
    int ret = width * height;
    printf("%d\n", ret);
}



int main(void)
{
    int H, W, N, M;
    scanf("%d %d %d %d", &H, &W, &N, &M);
    placement(H, W, N, M);
    return 0;
}