#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    scanf("%s", str);
    int ret = strlen(str);
    printf("%d\n", ret);
    return 0;
}