#include <stdio.h>

int heap[100001];
int size = 0;

void push(int x)
{
    int i = ++size;
    while (i > 1 && heap[i / 2] < x)
    {
        heap[i] = heap[i / 2];
        i /= 2;
    }
    heap[i] = x;
}

int pop()
{
    if (size == 0)
        return 0;

    int min = heap[1];
    int tmp = heap[size--];

    int parent = 1, child = 2;
    while (child <= size)
    {

        if (child < size && heap[child] < heap[child + 1])
        {
            child++;
        }

        if (tmp >= heap[child])
            break;

        heap[parent] = heap[child];
        parent = child;
        child *= 2;
    }

    heap[parent] = tmp;
    return min;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);

        if (x == 0)
        {
            printf("%d\n", pop());
        }
        else
        {
            push(x);
        }
    }

    return 0;
}
