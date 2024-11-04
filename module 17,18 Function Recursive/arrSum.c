#include <stdio.h>

int a[10000],sum;

void goToIndex(int x,int n){
    if(x==n){
        return;
    }
    sum +=a[x];
    goToIndex(x+1,n);
}


int main(){
    int n;
    scanf("%d",&n);
    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }

    sum =0;
    goToIndex(0,n);
    printf("%d\n",sum);
}