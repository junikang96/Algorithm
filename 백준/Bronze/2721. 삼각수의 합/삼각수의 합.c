#include <stdio.h>

int my_T(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int my_W(int num)
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result += i * my_T(i + 1);
    }
    return result;
}

int main(void)
{
    int T, n;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        int ret = my_W(n);
        printf("%d\n", ret);
    }
    return 0;
}