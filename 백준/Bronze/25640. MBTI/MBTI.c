#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[5];
    scanf("%s", input);
    int N;
    scanf("%d", &N);

    char friend[101][5];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%s", friend[i]);
        if (!strcmp(input, friend[i]))
            count++;
    }

    printf("%d\n", count);

    return 0;
}