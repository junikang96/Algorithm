#include <stdio.h>

int stack[100001];
int top = -1;

void pop()
{
    top--;
}

void push(int num)
{
    top++;
    stack[top] = num;
}

int main(void)
{
    int K, x;
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            pop();
        }
        else
        {
            push(x);
        }
    }

    int sum = 0;
    for (int i = 0; i <= top; i++)
    {
        sum += stack[i];
    }
    printf("%d\n", sum);

    return 0;
}