#include <stdio.h>
#include <stdlib.h>

int getMax(int a[],int n){
    
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }
   printf("%d", getMax(a,n));
}