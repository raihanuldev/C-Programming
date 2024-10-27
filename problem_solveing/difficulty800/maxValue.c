#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c){
        printf("A Is Largesy");
    }
    else if(b>a && b>c){
        printf("B is Boro");
    }else{
        printf("C is Boro");
    }
    return 0;
}