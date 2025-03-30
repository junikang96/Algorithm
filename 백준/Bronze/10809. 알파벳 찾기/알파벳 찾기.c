#include <stdio.h>
#include <string.h>

char *alphabet = "abcdefghijklmnopqrstuvwxyz";

void find_alphabet(char* str)
{
    for (int i=0; i<strlen(alphabet); i++)
    {
        char c = alphabet[i];
        int flag = -1;

        for (int j=0; str[j] != '\0'; j++)
        {
            if (str[j] == c)
            {
                flag = j;
                break;
            }
        }

        printf("%d ", flag);
    }
    printf("\n");
}


int main(void)
{
    char str[101];
    scanf("%s", str);
    find_alphabet(str);
    return 0;
}