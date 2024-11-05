#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res = add(a,b);
    printf("%d",res);

    return 0;
}