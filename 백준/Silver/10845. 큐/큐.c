#include <stdio.h>
#include <string.h>

// 먼저 넣은 데이터가 먼저 나옴(first in first out)
int queue[10000];
int front = 0; // 자료가 나오는 위치 (pop)
int rear = 0;  // 자료가 들어가는 위치 (push)

void push(int n)
{
    // 정수 n을 큐에 넣음
    queue[rear] = n;
    rear++;
}

void pop()
{
    // 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력
    // 큐에 정수가 없으면 -1
    if (front == rear)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", queue[front]);
        front++;
    }
}

void size()
{
    // 큐에 들어있는 정수의 개수 출력
    printf("%d\n", rear - front);
}

void empty()
{
    // 큐가 비어있으면 1, 아니면 0 출력
    if (front == rear)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

void front_func()
{
    // 큐의 가장 앞에 있는 정수 출력, 없으면 -1
    if (front == rear)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
}

void back()
{
    // 큐의 가장 뒤에 있는 정수 출력, 없으면 -1
    if (front == rear)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", queue[rear - 1]);
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
        if (cmd[strlen(cmd) - 1]  == '\n')
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

        if (!strcmp(cmd, "front"))
        {
            front_func();
        }

        if (!strcmp(cmd, "back"))
        {
            back();
        }
    }

    return 0;
}