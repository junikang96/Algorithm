#include <stdio.h>

int main(void)
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    int days = (V - B + A - B - 1) / (A - B);
    printf("%d\n", days);
    return 0;
}
