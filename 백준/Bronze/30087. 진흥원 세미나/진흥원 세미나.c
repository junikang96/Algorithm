#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    char room[10];
} Seminar;

Seminar list[] = {
    {"Algorithm", "204"},
    {"DataAnalysis", "207"},
    {"ArtificialIntelligence", "302"},
    {"CyberSecurity", "B101"},
    {"Network", "303"},
    {"Startup", "501"},
    {"TestStrategy", "105"}};

int main(void)
{
    int N;
    scanf("%d", &N);
    char *input[8];
    for (int i = 0; i < N; i++)
    {
        input[i] = (char *)malloc(30 * sizeof(char));
        scanf("%s", input[i]);
        for (int j = 0; j < 7; j++)
        {
            if (!strcmp(input[i], list[j].name))
            {
                printf("%s\n", list[j].room);
                break;
            }
        }
    }
    return 0;
}