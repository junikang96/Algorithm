#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int index;
    int age;
    char name[101];
} member;

int compare(const void *a, const void *b)
{
    member *A = (member *)a;
    member *B = (member *)b;

    if (A->age < B->age)
        return -1;
    else if (A->age > B->age)
        return 1;
    else
    {
        if (A->index < B->index)
            return -1;
        else
            return 1;
    }
    return 0;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    member *member_list;

    member_list = (member *)malloc(N * sizeof(member));

    for (int i = 0; i < N; i++)
    {
        scanf("%d %s", &member_list[i].age, member_list[i].name);
        member_list[i].index = i;
    }

    qsort(member_list, N, sizeof(member_list[0]), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %s\n", member_list[i].age, member_list[i].name);
    }

    return 0;
}
