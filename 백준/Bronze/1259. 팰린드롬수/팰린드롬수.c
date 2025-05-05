#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    char str[6];

    while (1)
    {
        scanf("%d", &N);
        if (N == 0) break;

        sprintf(str, "%d", N);
        size_t len = strlen(str);
        int flag = 1;

        for (size_t i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - i - 1])
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
