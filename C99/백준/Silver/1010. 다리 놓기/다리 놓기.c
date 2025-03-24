#include <stdio.h>

long long bridge_num(int N, int M);

int main(void)
{
    int T;
    scanf("%d", &T);

    for(int i=0;i<T;i++)
    {
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%lld\n", bridge_num(N, M));
    }
    return 0;
}

long long bridge_num(int N, int M)
{
    long long result = 1;
    for (int i = 1; i <= N; i ++)
    {
        result = result * (M - N + i) / i ;
    }
    return result;
}
