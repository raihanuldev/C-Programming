#include <stdio.h>

void shiftZero(int a[],int n){
    int new[n],index=0;
    for(int i=0; i<n; i++){

        if(a[i]!=0){
            new[index++] = a[i];
        }
    }   
    while(index <n){
        new[index++] =0;
    }

    for(int i =0; i<n; i++){
        printf("%d ",new[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    shiftZero(a,n);
}