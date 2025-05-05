#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int find_node(int x1, int y1, int r1, int x2, int y2, int r2);

int main(void)
{
    
    int T;
    scanf("%d", &T);
    

    for (int i=0; i<T; i++)
    {
        int x1, y1, r1;
        int x2, y2, r2;
        scanf("%d %d %d %d %d %d\n", &x1, &y1, &r1, &x2, &y2, &r2);
        printf("%d\n", find_node(x1,y1,r1,x2,y2,r2));
    }

    return 0;
}

int find_node(int x1, int y1, int r1, int x2, int y2, int r2)
{
    double d = sqrt(((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));
    if (d == 0 && r1 == r2)
    {
        return -1;
    }  
    else if(d > (r1+r2) || d < abs(r1-r2))
    {
        return 0;
    }
    else if(d == (r1+r2) || d == abs(r1-r2))
    {
        return 1;
    }
    else
    {
        return 2;
    }

}