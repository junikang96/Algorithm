#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char result[81];
        scanf("%s", result);

        int i = 0;
        int index = 0; 
        int score = 0;

        while (result[i] != '\0')
        {
            if (result[i] == 'O')
            {
                index++;
                score += index;
            }
            else
            {
                index = 0;
            }
            i++;
        }

        printf("%d\n", score);
    }

    return 0;
}
