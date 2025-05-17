#include <stdio.h>

unsigned int S = 0;

void check(int x)
{
    if (S & (1 << (x - 1)))
        printf("1\n");
    else
        printf("0\n");
}

int main(void)
{
    int M;
    scanf("%d", &M);

    char input[7];
    int x;

    for (int i = 0; i < M; i++)
    {
        scanf("%s", input);

        switch (input[0])
        {
        case 'a': // add or all
            if (input[1] == 'd')
            { // add
                scanf("%d", &x);
                S |= (1 << (x - 1));
            }
            else
            { // all
                S = (1 << 20) - 1;
            }
            break;

        case 'r': // remove
            scanf("%d", &x);
            S &= ~(1 << (x - 1));
            break;

        case 'c': // check
            scanf("%d", &x);
            check(x);
            break;

        case 't': // toggle
            scanf("%d", &x);
            S ^= (1 << (x - 1));
            break;

        case 'e': // empty
            S = 0;
            break;
        }
    }

    return 0;
}