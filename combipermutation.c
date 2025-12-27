#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, r;
    printf("Enter n ");
    scanf("%d", &n);
    printf("Enter r ");
    scanf("%d", &r);
    int factn = factorial(n);
    int factr = factorial(r);
    int factnr = factorial(n - r);
    int ncr = factn / (factr * factnr);
    printf("The nCr is %d ", ncr);


    return 0;
}