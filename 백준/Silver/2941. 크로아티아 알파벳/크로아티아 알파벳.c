#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *alphabet[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    char input[101];
    scanf("%s", input);

    int i = 0;
    int count = 0;

    while (input[i] != '\0')
    {
        int flag = 0;
        for (int j = 0; j < 8; j++)
        {
            int len = strlen(alphabet[j]);
            if (strncmp(&input[i], alphabet[j], len) == 0)
            {
                i += len;
                count++;
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            i++;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
