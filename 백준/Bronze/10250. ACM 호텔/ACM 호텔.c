#include <stdio.h>

void find_room_num(int H, int N)
{
    int floor, room;

    if (N % H == 0)
    {
        floor = H;
        room = N / H;
    }
    else
    {
        floor = N % H;
        room = N / H + 1;
    }

    printf("%d%02d\n", floor, room);
}

int main(void)
{
    int T, H, W, N;
    scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        find_room_num(H, N);
    }


    return 0;
}