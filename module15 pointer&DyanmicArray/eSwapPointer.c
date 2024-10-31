#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int *aPointer = &a;
    int *bPointer = &b;
    printf("%d %d", *bPointer,*aPointer);
    return 0;
}