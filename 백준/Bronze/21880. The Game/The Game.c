#include <stdio.h>

void calc_score(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    calc_score(a, b);
    return 0;
}

void calc_score(int a, int b)
{
    int expert = 0;  
    int viewer = 0;  

    while (expert < a || viewer < b)
    {
        if (expert < a)
        {
            expert++;
            printf("%d:%d\n", expert, viewer);
        }

        if (viewer < b)
        {
            viewer++;
            printf("%d:%d\n", expert, viewer);
        }
    }
}