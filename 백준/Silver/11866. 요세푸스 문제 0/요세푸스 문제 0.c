#include <stdio.h>

int queue[1000000];
int front = 0;
int rear = -1;

int josephus[1001];

void push(int x)
{
    queue[++rear] = x;
}

int pop()
{
    if (rear - front + 1 == 0)
    {
        return -1;
    }
    else
    {
        return (queue[front++]);
    }
}

int size()
{
    return (rear - front + 1);
}

int empty()
{
    if (rear - front + 1 != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++)
    {
        push(i);
    }

    int tmp;
    int j = 0;
    while (size() != 0)
    {
        for (int i = 1; i <= K - 1; i++)
        {
            tmp = pop();
            push(tmp);
        }
        tmp = pop();
        josephus[j] = tmp;
        j++;
    }

    printf("<");
    for (int i = 0; i < N - 1; i++)
    {
        printf("%d, ", josephus[i]);
    }
    printf("%d>", josephus[N - 1]);
    return 0;
}