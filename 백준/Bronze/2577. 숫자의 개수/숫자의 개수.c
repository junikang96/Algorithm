#include <stdio.h>
#include <string.h>


int main(void)
{
    int A, B, C;
    char arr[11] = {};
    char count[10] = {};
    scanf("%d %d %d", &A, &B, &C);
    int num = A * B * C;
    
    sprintf(arr, "%d", num);

    for(int i=0; arr[i] != '\0'; i++)
    {
        count[arr[i] - '0']++;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}