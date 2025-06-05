#include <stdio.h>

int main(void)
{
    int T, A, B;
    scanf("%d", &T);
    int i = 1;
    
    while(T--)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i++, A + B);
    }
    
    return 0;
}