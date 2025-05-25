#include <stdio.h>

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int main(void)
{
    int L, P, V;
    int index = 1;

    while (1)
    {
        scanf("%d %d %d", &L, &P, &V);
        if (L == 0 && P == 0 && V == 0)
            break;
        
        int max_days = (V / P) * L + min(V % P, L);

        printf("Case %d: %d\n", index, max_days);
        index++;
    }
    return 0;
}