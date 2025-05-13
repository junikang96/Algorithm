#include <stdio.h>
#include <string.h>

int paint_count(char input[50][50], int a, int b, char first)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char predicted_color;
            int index = (i + j) % 2;
            if (index == 0)
            {
                predicted_color = first;
            }
            else
            {
                if (first == 'W')
                    predicted_color = 'B';
                else
                    predicted_color = 'W';
            }

            if (input[a + i][b + j] != predicted_color)
            {
                count++;
            }
        }
    }

    return count;
}

int main(void)
{
    int M, N;
    scanf("%d %d", &N, &M);
    char input[50][50];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", input[i]);
    }

    int min = 64;

    for (int i = 0; i <= N - 8; i++)
    {

        for (int j = 0; j <= M - 8; j++)
        {
            int count_w = paint_count(input, i, j, 'W');
            int count_b = paint_count(input, i, j, 'B');
            int temp;
            if (count_w < count_b)
                temp = count_w;
            else
                temp = count_b;

            if (temp < min)
            {
                min = temp;
            }
        }
    }

    printf("%d\n", min);

    return 0;
}