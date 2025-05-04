#include <stdio.h>
#include <math.h>

int main(void)
{
    int num[6]={};
    int sum = 0;

    for(int i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
        sum += pow(num[i], 2);
    }

    int result = sum % 10;
    printf("%d\n", result);

    return 0;
}