#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int A, B, C;
    char str1[10], str2[10], str3[20];
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
   
    sprintf(str1, "%d", A);
    sprintf(str2, "%d", B);
    strcpy(str3, str1);
    strcat(str3, str2);

    int result = atoi(str3) - C;

    printf("%d\n", A+B-C);
    printf("%d\n", result);
    return 0;
}