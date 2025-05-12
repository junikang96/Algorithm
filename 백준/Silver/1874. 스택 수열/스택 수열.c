#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[100001] = {};
int top = -1;

char result[200001][2];
int result_index = 0;

void push(int num)
{
    top++;
    stack[top] = num;
    strcpy(result[result_index], "+");
    result_index++;
    // printf("+\n");
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }

    else
    {
        // printf("-\n");
        // printf("stack[%d]\n", top);
        top--;
        strcpy(result[result_index], "-");
        result_index++;
        return 0;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int input[100001] = {};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    int index = 0;
    int current = 1;

    while (index < n)
    {
        // 현재 숫자가 n이하 && 스택이 비어있거나 현재 top이 수열의 현재 index와 다를 때
        if (current <= n && (top == -1 || stack[top] != input[index]))
        {
            push(current);
            current++;
        }

        if (stack[top] == input[index])
        {
            pop();
            index++;
        }
        else if (current > n)
        {
            printf("NO\n");
            return 0;
        }
    }

    for (int i = 0; i < result_index; i++)
    {
        printf("%s\n", result[i]);
    }

    return 0;
}