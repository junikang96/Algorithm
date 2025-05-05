#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);

    if (M < 45)
    {
        M = M + 60 - 45;
        H = (H - 1 + 24) % 24;
    }
    else
    {
        M = M - 45;
    }

    printf("%d %d\n", H, M);
    return 0;
}
