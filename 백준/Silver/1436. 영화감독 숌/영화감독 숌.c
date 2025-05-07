#include <stdio.h>
#include <string.h>


int main(void)
{
    int N;
    scanf("%d", &N);

    int num = 666;
    int count = 0;

    while(count < N)
    {
        char str[10];
        sprintf(str, "%d", num);
        if (strstr(str, "666") != NULL)
        {
            count++;
        }
        num++;
    }
    printf("%d\n", num - 1);

    return 0;
}