#include <stdio.h>

// void changeNumber(int x[]){
//     x[0] = 10;
//     return;
// }

// --------------------------------------------------------------

void swap(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

int main()
{
    int arr[] = {1, 2};

    printf("%d %d \n", arr[0], arr[1]);
    swap(arr);
    printf("%d %d \n", arr[0], arr[1]);

    // array is passed by reference

    // int arr[5] = {1,2,3,4,5};
    // printf("%d \n" , arr[0]);
    // changeNumber(arr);
    // printf("%d  " , arr[0]);

    // ------------------------------------------------------------------
}