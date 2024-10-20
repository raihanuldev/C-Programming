#include <stdio.h>

int main(){
     int a[10000],b[10000];
     int length=0;
     scanf("%d",&length);

     for(int i=0; i<length; i++){
        scanf("%d", &a[i]);
     }
    // direct ultai dimo bhaia
    for(int i =0, j= length-1; i<length; i++, j--){
        b[j] = a[i];
    }
    for(int i =0; i<length; i++){
        a[i] = b[i];
    }
     for(int i =0; i<length; i++){
        printf("%d ",a[i]);
     }
     
    return 0;
}