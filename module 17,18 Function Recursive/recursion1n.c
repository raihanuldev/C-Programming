#include <stdio.h>


void printN(int x,int n){
    if(x>n){
        return 0;
    }
    printf("%d\n",x);
    printN(x+1,n);
}

int main(){
    int n = 5;
    printN(1,5);
    return 0;
}