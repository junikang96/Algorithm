#include <stdio.h>

// 자를 수 있는 개수 계산 
long long calc_num(int arr[], int k, long long len)
{
    long long count = 0;

    for (int i = 0; i < k; i++)
    {
        count += arr[i] / len;
    }
    return count;
}

int main()
{
    int K, N;
    scanf("%d %d", &K, &N);

    int LAN_len[K];
    int max_len = 0;

    for (int i = 0; i < K; i++)
    {
        scanf("%d", &LAN_len[i]);
        if (LAN_len[i] > max_len)
            max_len = LAN_len[i];
    }

    long long left = 1;
    long long right = max_len;
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long pieces = calc_num(LAN_len, K, mid);

        if (pieces >= N)
        {
            // 길이 늘림
            result = mid;
            left = mid + 1;
        }
        else
        {
            // 길이 줄임
            right = mid - 1;
        }
    }

    printf("%lld\n", result);
    return 0;
}
