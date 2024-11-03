#include <stdio.h>

void distribute(int roll,int x){
    if(x==0){
        return 0;
    }
    printf("Roll %d got %d Chocolate \n",roll,x);
    distribute(roll+1,x-1);
}

int main(){

    distribute(1,5);
    return 0;
}