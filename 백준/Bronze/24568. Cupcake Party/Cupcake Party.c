#include <stdio.h>

int main(void)
{
    int R, S;
    scanf("%d %d", &R, &S);

    int total = R * 8 + S * 3;
    printf("%d\n", total - 28);

    return 0;
}