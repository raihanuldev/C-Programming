#include <stdio.h>

int main(){
    int tcase;
    scanf("%d",&tcase);

    for(int i =0; i<tcase; i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a+b ==c || a+c ==b || b+c ==a){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

    return 0;
}