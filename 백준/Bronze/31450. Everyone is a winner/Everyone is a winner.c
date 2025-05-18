#include <stdio.h>

int main(void)
{
    int M, K;
    scanf("%d %d", &M, &K);

    if(M % K == 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}