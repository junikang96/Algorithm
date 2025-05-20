#include <stdio.h>

long long calc_length(int arr[], int n, int len)
{
    long long length = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > len)
        {
            length += arr[i] - len;
        }
    }
    return length;
}

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int height[1000000];
    int max = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &height[i]);
        if (height[i] > max)
        {
            max = height[i];
        }
    }

    int left = 0;
    int right = max;
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        long long cut = calc_length(height, N, mid);

        if (cut >= M)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("%d\n", result);
    return 0;
}
