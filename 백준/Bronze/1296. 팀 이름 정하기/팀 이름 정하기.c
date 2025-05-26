#include <stdio.h>
#include <string.h>

int count_letters(char *name, int *letter_count)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'L')
            letter_count[0]++;
        if (name[i] == 'O')
            letter_count[1]++;
        if (name[i] == 'V')
            letter_count[2]++;
        if (name[i] == 'E')
            letter_count[3]++;
    }
    return 0;
}

int calc_score(int *count)
{
    int L = count[0];
    int O = count[1];
    int V = count[2];
    int E = count[3];

    int ret = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
    return ret;
}

int main(void)
{
    char name[21];
    char teamname[51][21];
    scanf("%s", name);
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", teamname[i]);
    }

    int max_score = -1;
    char win_team[21];

    for (int i = 0; i < N; i++)
    {
        int count[4] = {};
        count_letters(name, count);
        count_letters(teamname[i], count);

        int score = calc_score(count);

        if (score > max_score)
        {
            max_score = score;
            strcpy(win_team, teamname[i]);
        }

        else if (score == max_score)
        {
            if (strcmp(teamname[i], win_team) < 0)
            {
                strcpy(win_team, teamname[i]);
            }
        }
    }

    printf("%s\n", win_team);
    return 0;
}