#include <stdio.h>

int main(void)
{
    int N = 0, sum = 0;
    char arr[101];
    scanf("%d", &N);
    scanf("%s", arr);

    for(int i=0; i<N;i++)
    {
        sum += arr[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}