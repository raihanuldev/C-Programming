#include <stdio.h>


void swap(int x, int y){
    
    printf("%d %d",x,y);
}


int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int *xp = &x;
    int *yp = &y;
    swap(x,y);
    return 0;
}