#include <stdio.h>

int main(void)
{
    int s,d,i,l, n;
    scanf("%d %d %d %d %d", &s, &d, &i, &l, &n);

    int sum = s+d+i+l;
    int result;
    if(sum > 4 * n)
        result = 0;
    else
        result = 4 * n - sum;

    printf("%d\n", result);
    return 0;
}