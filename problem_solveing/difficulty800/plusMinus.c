#include <stdio.h>

int main(){
    int tcase;
    scanf("%d",&tcase);

    for(int i =0; i<tcase; i++){
        int a,b,c;
        scanf("%d %d %d", &a,&b,&c);
        
        if(a+b == c){
            printf("+\n");
        }
        if(a -b ==c){
            printf("-\n");
        }

    }

    return 0;
}