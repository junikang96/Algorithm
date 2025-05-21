#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a = n*0.78;
    int b = n*0.8 + n*0.2*0.78;
    printf("%d %d\n", a, b);

    return 0;
}