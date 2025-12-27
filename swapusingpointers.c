#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    int b;
    printf("Enter the value of b \n");
    scanf("%d", &b);
    swap(&a, &b);

    printf("Value of a after swap %d \n", a);
    printf("Value of b after swap %d \n", b);

    return 0;
}