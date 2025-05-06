#include <stdio.h>

int greatest_Common_Divisor(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int least_Common_Multiple(int a, int b)
{
    int ret = a * b / greatest_Common_Divisor(a, b);
    return ret;
}

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    int gcd = greatest_Common_Divisor(A, B);
    int lcm = least_Common_Multiple(A, B);
    printf("%d\n", gcd);
    printf("%d\n", lcm);

    return 0;
}