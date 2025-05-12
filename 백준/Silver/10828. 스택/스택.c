#include <stdio.h>
#include <string.h>

int stack[100000];
int t = -1;

void push(int n)
{
    t++;
    stack[t] = n;
}

void pop()
{
    if (t == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", stack[t]);
        t--;
    }
}

void size()
{
    printf("%d\n", t + 1);
}

void empty()
{
    if (t == -1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

void top()
{
    if (t == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", stack[t]);
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);
    getchar();

    char cmd[101];

    for (int i = 0; i < N; i++)
    {
        fgets(cmd, sizeof(cmd), stdin);
        if (cmd[strlen(cmd) - 1] == '\n')
        {
            cmd[strlen(cmd) - 1] = '\0';
        }

        if (!strncmp(cmd, "push", 4))
        {
            int num;
            sscanf(cmd, "push %d", &num);
            push(num);
        }

        if (!strcmp(cmd, "pop"))
        {
            pop();
        }

        if (!strcmp(cmd, "size"))
        {
            size();
        }

        if (!strcmp(cmd, "empty"))
        {
            empty();
        }

        if (!strcmp(cmd, "top"))
        {
            top();
        }
    }

    return 0;
}