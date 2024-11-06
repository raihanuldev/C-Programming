#include <stdio.h>

void fun(int x,int *y){
    x*=10;
    *y *=10;
    // printf("%d %d ",x,*y);
}

int main(){

    int a =10,b=20;

    fun(a,&b);
    printf("%d %d",a,b);
}
//call by value & call by reference 
// refercen tokon patabo jokon eiat value update korte hobe.