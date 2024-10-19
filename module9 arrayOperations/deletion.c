#include <stdio.h>

int main(){
    int a[100000];
    int length;
    scanf("%d",&length);

    for(int i =0; i<length; i++){
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);

    for(int i = index; i<length; i++){
        a[i] = a[i+1];
    }
    length--;

    for(int i=0; i<length; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
//  0 1 2 3 4     index
//  1 2 3 4 5