#include <stdio.h>
#include <string.h>

void fun(int *arr,int n)
{
    for(int i =0; i<n; i++){
        printf("%d ", *(arr+i));
    }
    arr[0]=-200;
}

int main(){
    int a[5] = {2,3,4,5,3};
    fun(a,5);
    printf("\n");
     for(int i =0; i<5; i++){
        printf("%d ",a[i]);
    }
    return 0;
}