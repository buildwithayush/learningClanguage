#include<stdio.h>
void changeNumber(int x[]){
    x[0] = 10;
    return;
}


int main(){

    // array is passed by reference
    int arr[5] = {1,2,3,4,5};
    printf("%d \n" , arr[0]);
    changeNumber(arr);
    printf("%d  " , arr[0]);
    
}