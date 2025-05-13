#include <stdio.h>
#include <string.h>

char stack[50];
int t = -1;

void push(int n)
{
    t++;
    stack[t] = n;
}

void pop()
{
    if (t != -1)
    {
        // printf("%d\n", stack[t]);
        t--;
    }
}

int empty()
{
    if (t == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        t = -1;
        char input[50];
        scanf("%s", input);
        if (input[0] == ')')
        {
            printf("NO\n");
            continue;
        }

        int flag = 1;

        for (size_t j = 0; j < strlen(input); j++)
        {
            if (input[j] == '(')
            {
                push(j);
            }
            else if (input[j] == ')')
            {
                if(empty())
                {
                    flag = 0;
                    break;
                }
                pop();
            }
        }

        if (flag == 1 && empty())
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}