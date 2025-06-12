#include <stdio.h>

int main(void)
{
    int HH, MM;
    scanf("%d %d", &HH, &MM);

    int hour = HH - 9;
    int min = MM - 0;

    int time = hour * 60 + min;
    printf("%d\n", time);

    return 0;
}