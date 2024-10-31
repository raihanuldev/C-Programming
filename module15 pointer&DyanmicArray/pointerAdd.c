#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *aPointer = &a;    
    int *bPointer = &b;
    printf("%d",*aPointer+*bPointer);    

    return 0;
}