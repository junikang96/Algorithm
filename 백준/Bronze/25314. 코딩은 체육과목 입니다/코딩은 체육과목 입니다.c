#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int mod = N / 4;
    for (int i = 0; i < mod; i++)
    {
        printf("long ");
    }
    printf("int\n");

    return 0;
}