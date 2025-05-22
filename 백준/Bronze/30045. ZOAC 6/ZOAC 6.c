#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    char* input[501];
    int count = 0;
    for(int i=0;i<N;i++)
    {
        input[i] = (char*)malloc(501*sizeof(char));
        scanf("%s", input[i]);
        if(strstr(input[i], "01") != NULL || strstr(input[i], "OI") != NULL)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}