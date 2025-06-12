#include <stdio.h>
#include <string.h>

typedef struct
{
    char abb[11];
    char name[51];
} School;

School schools[4] = {
    {"NLCS", "North London Collegiate School"},
    {"BHA", "Branksome Hall Asia"},
    {"KIS", "Korea International School"},
    {"SJA", "St. Johnsbury Academy"}};

int main(void)
{
    char input[11];
    scanf("%s", input);

    for (int i = 0; i < 4; i++)
    {
        if (!strcmp(input, schools[i].abb))
            printf("%s\n", schools[i].name);
    }

    return 0;
}