#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    const char *s1 = (const char *)a;
    const char *s2 = (const char *)b;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return len1 - len2; // 길이 짧은 순으로 정렬
    else
        return strcmp(s1, s2); // 길이가 같으면 사전순
}

int main(void)
{
    int N;
    scanf("%d", &N);

    char input[N][51];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", input[i]);
    }

    qsort(input, sizeof(input) / sizeof(input[0]), sizeof(input[0]), compare);

    int count = 1;
    for (int i = 0; i < N; i++)
    {
        if (strcmp(input[i], input[count - 1]) != 0)
        {
            strcpy(input[count], input[i]);
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", input[i]);
    }

    // printf("%s\n", input[0]);
    // for (int i = 1; i < N; i++)
    // {
    //     if (strcmp(input[i], input[i - 1]) != 0)
    //     {
    //         printf("%s\n", input[i]);
    //     }
    // }

    return 0;
}