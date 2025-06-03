#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);
    int arr[10001];
    int k = 0;
    int found = 0;

    for (int i = M; i <= N; i++)
    {
        if (is_prime(i))
        {
            arr[k] = i;
            k++;
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("-1\n");
        return 0;
    }

    int sum = 0;
    int min = arr[0];

    for (int i = 0; i < k; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        sum += arr[i];
    }

    printf("%d\n", sum);
    printf("%d\n", min);

    return 0;
}