#if 0
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

    long long hash = 0;
    for (int i = 0; i < L; i++)
    {
        int element = change_to_integer(str[i]);
        hash += element * pow(31, i);
    }

    printf("%lld\n", hash);
    return 0;
}
#endif

#if 1
#include <stdio.h>

int MOD = 1234567891;

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

    long long hash = 0;
    long long r = 1;

    for (int i = 0; i < L; i++)
    {
        int element = change_to_integer(str[i]);
        hash = (hash + element * r) % MOD;
        r = (r * 31) % MOD;
    }

    printf("%lld\n", hash);
    return 0;
}
#endif