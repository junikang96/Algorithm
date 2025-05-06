#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fizzbuzz(int num, char *buf)
{
    if (num % 3 == 0 && num % 5 == 0)
        strcpy(buf, "FizzBuzz");
    else if (num % 3 == 0)
        strcpy(buf, "Fizz");
    else if (num % 5 == 0)
        strcpy(buf, "Buzz");
    else
        sprintf(buf, "%d", num);
}

int is_number(const char *s)
{
    return s[0] >= '0' && s[0] <= '9';
}

int main(void)
{
    char input[3][9];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", input[i]);
    }

    int known = -1;
    // 숫자 항목 찾기
    for (int i = 0; i < 3; i++)
    {
        if (is_number(input[i]))
        {
            known = atoi(input[i]);
            int start = known - i; // i는 0, 1, 2 중 하나니까 -2 ~ 0 범위 가능
            int flag = 1;
            for (int j = 0; j < 3; j++)
            {
                char temp[9];
                fizzbuzz(start + j, temp);
                if (strcmp(temp, input[j]) != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                char result[9];
                fizzbuzz(start + 3, result);
                printf("%s\n", result);
                return 0;
            }
        }
    }

    return 0;
}