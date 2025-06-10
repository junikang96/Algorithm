#include <stdio.h>

int main(void)
{
    char ISBN[14]; 
    scanf("%s", ISBN);

    int index = -1;
    int isbn[13] = {};

    for (int i = 0; i < 13; i++)
    {
        if (ISBN[i] == '*')
        {
            index = i;
        }
        else
        {
            isbn[i] = ISBN[i] - '0';
        }
    }

    for (int digit = 0; digit <= 9; digit++)
    {
        isbn[index] = digit;

        int sum = 0;
        for (int i = 0; i < 12; i++)
        {
            if (i % 2 == 0)
                sum += isbn[i];
            else
                sum += 3 * isbn[i];
        }

        sum += isbn[12]; 

        if (sum % 10 == 0)
        {
            printf("%d\n", digit);
            break;
        }
    }

    return 0;
}
