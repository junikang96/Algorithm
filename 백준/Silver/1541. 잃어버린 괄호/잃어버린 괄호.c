#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char input[101];
    scanf("%s", input);

    int result = 0;
    int i = 0, num = 0;
    int minus_flag = 0;

    while(input[i] != '\0')
    {
        num = 0;

        while(input[i] >= '0' && input[i] <= '9')
        {
            num = num * 10 + (input[i] - '0'); // 자릿수 올림처리
            i++;
        }

        if (minus_flag)
        {
            result -= num;
        }
        else
        {
            result += num;
        }

        if(input[i] == '-')
        {
            minus_flag = 1;
        }

        if(input[i] != '\0')
        {
            i++;
        }

    }

    printf("%d\n", result);

    return 0;
}