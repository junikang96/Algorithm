#include <stdio.h>
#include <string.h>

void repeat_str(int R, char* str)
{
    char result[161];
    int index = 0;
    
    for(size_t i = 0; i < strlen(str); i++)
    {
        for(int j = 0; j < R; j++)
        {
            result[index++] = str[i];
        }
    }
    result[index] = '\0';
    printf("%s\n", result);
}

int main(void)
{
    int T, R;
    char str1[21];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %s", &R, str1);
        repeat_str(R, str1);
    }

    return 0;
}