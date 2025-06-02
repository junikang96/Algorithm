#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return (*(char *)b - *(char *)a);
}

int main(void)
{
    char input[11];
    scanf("%s", input);

    qsort(input, strlen(input), sizeof(char), compare);
    printf("%s\n", input);

    return 0;
}