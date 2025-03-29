#include <stdio.h>
#include <string.h>

void typing_method(char* str)
{
    if (strcmp(str, "fdsajkl;") == 0 || strcmp(str, "jkl;fdsa") == 0)
    {
        printf("in-out\n");
    }
    else if (strcmp(str, "asdf;lkj") == 0 || strcmp(str, ";lkjasdf") == 0)
    {
        printf("out-in\n");
    }
    else if (strcmp(str, "asdfjkl;") == 0 )
    {
        printf("stairs\n");
    }
    else if (strcmp(str, ";lkjfdsa") == 0 )
    {
        printf("reverse\n");
    }
    else{
        printf("molu\n");
    }
}

int main(void)
{
    char memo[100];
    scanf("%s", memo);
    typing_method(memo);
    return 0;
}


