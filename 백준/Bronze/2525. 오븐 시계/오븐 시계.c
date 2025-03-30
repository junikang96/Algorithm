#include <stdio.h>

void coocking_time(int hour, int min, int time)
{
    min += time;
    hour += min / 60;
    min = min % 60;
    hour = hour % 24;
    
    printf("%d %d\n", hour, min);
}

int main(void)
{
    int h, m, t;
    scanf("%d %d", &h, &m);
    scanf("%d", &t);
    coocking_time(h, m, t);

    return 0;
}