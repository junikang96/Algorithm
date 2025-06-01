#include <stdio.h>

int arr[10001];

int constructor(int n)
{
    int sum = n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    for (int i = 1; i <= 10000; i++)
    {
        int ret = constructor(i);
        if (ret <= 10000)
        {
            arr[ret] = 1;
        }
    }

    for (int i = 1; i < 10000; i++)
    {
        if (arr[i] == 0) 
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
