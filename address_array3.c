#include<stdio.h>

int main(){
    int arr[4] = {1,2,3,4};
    printf("%p " , &arr[0]);
    printf("%p " , &arr[1]);
    printf("%p " , &arr[2]);
    printf("%p " , &arr[3]);
    return 0 ;
}