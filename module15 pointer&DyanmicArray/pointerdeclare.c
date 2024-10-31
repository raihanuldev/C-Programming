#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int *aPointer = &a;
    int *bPointer = &b;
    printf("%d ", *aPointer+*bPointer);

    return 0;
}

// pointer & deferencing 