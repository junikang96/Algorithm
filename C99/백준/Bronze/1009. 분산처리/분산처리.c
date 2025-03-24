#include <stdio.h>
#include <math.h>

int computer_num(int a, int b);

int main(void)
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", computer_num(a, b));

    }

    return 0;
}

int computer_num(int a, int b)
{
    a = a % 10;
    if(b==0) return 1;
    int ret;
    switch(a)
    {
        case 0:
            return 10;
            
        case 2:
            b = b % 4;
            if(b == 0) b = 4;
            ret = (int)pow(2, b) % 10;
            return ret;

        case 3:
            b = b % 4;
            if(b == 0) b = 4;
            ret = (int)pow(3, b) % 10;
            return ret;

        case 4:
            b = b % 2;
            if(b == 0) b = 2;
            ret = (int)pow(4, b) % 10;
            return ret;

        case 7:
            b = b % 4;
            if(b == 0) b = 4;
            ret = (int)pow(7, b) % 10;
            return ret;

        case 8:
            b = b % 4;
            if(b == 0) b = 4;
            ret = (int)pow(8, b) % 10;
            return ret;          

        case 9:
            b = b % 2;
            if(b == 0) b = 2;
            ret = (int)pow(9, b) % 10;
            return ret;

        default:
            return a;

    }    
}