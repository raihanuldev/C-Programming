#include <stdio.h>


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int *xp = &x;
    int *yp = &y;
    swap(xp,yp);
    printf("%d %d",x,y);
    return 0;
}