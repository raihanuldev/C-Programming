#include <stdio.h>
#include <string.h>

void fun(int arr[],int n)
{
    int sum=0;
    for(int i =0; i<n; i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}

int main(){
    int a[5] = {2,3,4,5,3};
    fun(a,5);
    return 0;
}