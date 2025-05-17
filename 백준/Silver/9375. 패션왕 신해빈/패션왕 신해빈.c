#include <stdio.h>
#include <string.h>

typedef struct
{
    char clothes[21];
    char sort[21];
} pair;

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        pair list[30];
        char sort_list[30][21] = {}; // 종류 이름 저장
        int count[30] = {};          // 종류별 옷 개수
        int kind_count = 0;          // 현재까지 종류 수

        for (int i = 0; i < n; i++)
        {
            scanf("%s %s", list[i].clothes, list[i].sort);

            int flag = 0;
            for (int j = 0; j < kind_count; j++)
            {
                if (strcmp(list[i].sort, sort_list[j]) == 0)
                {
                    count[j]++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                strcpy(sort_list[kind_count], list[i].sort);
                count[kind_count]++;
                kind_count++;
            }
        }

        int result = 1;
        for (int i = 0; i < kind_count; i++)
        {
            result *= (count[i] + 1); // 안 입는 경우 포함
        }
        result -= 1; // 모두 안 입는 경우 제외

        printf("%d\n", result);
    }

    return 0;
}
