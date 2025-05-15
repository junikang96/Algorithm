#include <stdio.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int input[100001];
    int prefix[100001];

    prefix[0] = 0; 

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &input[i]);
        prefix[i] = prefix[i - 1] + input[i];
    }

    for (int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", prefix[b] - prefix[a - 1]);
    }

    return 0;
}
