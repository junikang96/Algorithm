#include <stdio.h>

int main(void)
{
    int N;
    int sizes[6] = {};
    int T, P;
    scanf("%d", &N);
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &sizes[i]);
    }

    scanf("%d %d", &T, &P);

    int t_bundle = 0;

    for (int i = 0; i < 6; i++)
    {
        int temp = sizes[i] % T;
        if (temp == 0)
        {
            t_bundle += sizes[i] / T;
        }
        else
        {
            t_bundle += sizes[i] / T + 1;
        }
    }

    int p_bundle = N / P;
    int p_num = N % P;

    printf("%d\n", t_bundle);
    printf("%d %d\n", p_bundle, p_num);

    return 0;
}