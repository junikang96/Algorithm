#include <stdio.h>
#include <math.h>

int change_to_integer(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int L;
    scanf("%d", &L);
    char str[L];
    scanf("%s", str);

    int hash = 0;
    for (int i = 0; i < L; i++)
    {
        int element = change_to_integer(str[i]);
        hash += element * pow(31, i);
    }

    printf("%d\n", hash);
    return 0;
}