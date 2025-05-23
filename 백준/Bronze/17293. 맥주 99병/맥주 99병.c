#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int k = n;

    if (n > 2)
    {
        for (int i = n; i > 2; i--)
        {
            printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
            printf("Take one down and pass it around, %d bottles of beer on the wall.\n", i - 1);
            printf("\n");
        }
        n = 2;
    }

    if (n == 2)
    {
        printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
        printf("Take one down and pass it around, 1 bottle of beer on the wall.\n");
        printf("\n");
        n--;
    }

    if (n == 1)
    {
        printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
        printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
        printf("\n");
        n--;
    }
    if(n == 0)
    {
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        if(k>1)
            printf("Go to the store and buy some more, %d bottles of beer on the wall.\n", k);
        else
            printf("Go to the store and buy some more, 1 bottle of beer on the wall.\n");
    }

    return 0;
}