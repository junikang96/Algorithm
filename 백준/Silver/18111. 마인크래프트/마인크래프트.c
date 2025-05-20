#include <stdio.h>
#include <limits.h>

int main(void)
{
    int N, M, B;
    scanf("%d %d %d", &N, &M, &B);

    int height[500][500] = {};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &height[i][j]);
        }
    }

    int min_time = INT_MAX, max_height;

    for (int target = 0; target <= 256; target++)
    {
        int remove = 0, add = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int diff = height[i][j] - target;
                if (diff > 0)
                    remove += diff; 
                else if (diff < 0)
                    add -= diff; 
            }
        }

        if (remove + B >= add)
        {
            int time = remove * 2 + add * 1;
            if(min_time > time)
            {
                min_time = time;
                max_height = target;
            }
            else if(min_time == time)
            {
                if(max_height < target)
                {
                    max_height = target;
                }
            }
        }
    }

    printf("%d %d\n", min_time, max_height);

    return 0;
}