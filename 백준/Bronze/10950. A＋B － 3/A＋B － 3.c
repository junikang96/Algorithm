#include <stdio.h>

int main(void)
{
    int T, A, B;
    scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d", &A, &B);
        int sum = A + B;
        printf("%d\n", sum);
    }

    return 0;
}