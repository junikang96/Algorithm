#include <stdio.h>
#include <string.h>

char stack[1001];
int t = -1;

void push(char c)
{
    t++;
    stack[t] = c;
}

void pop()
{
    if (t >= 0)
    {
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
    char str[1001];

    while (1)
    {
        t = -1;
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        if (!strcmp(str, "."))
        {
            break;
        }

        int flag = 1;

        for (size_t i = 0; i < strlen(str); i++)
        {
            if (str[i] == '(' || str[i] == '[')
            {
                push(str[i]);
            }

            else if (str[i] == ')')
            {
                if (empty() || stack[t] != '(')
                {
                    flag = 0;
                    break;
                }
                pop();
            }
            else if (str[i] == ']')
            {
                if (empty() || stack[t] != '[')
                {
                    flag = 0;
                    break;
                }
                pop();
            }
        }

        if (flag == 1 && empty())
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}