#include <stdio.h>

int isPrime(int n) 
{
    if (n < 2) 
        return 0; 

    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
            return 0; 
    }
    return 1; 
}

int main(void)
{
    int N, count = 0;
    int arr[1000] = {};
    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%d", &arr[i]);
        if(isPrime(arr[i]))
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}