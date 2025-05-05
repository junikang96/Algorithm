#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001] = {};
    fgets(str, sizeof(str), stdin);

    int count = 0;
    int i = 0;

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    while (str[i] != '\0')
    {
        // 현재 문자가 공백이 아니고 이전 문자가 공백이거나 시작 부분이라면 단어 카운트 +1
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
        i++;
    }
    printf("%d\n", count);

    return 0;
}