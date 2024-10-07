#include <stdio.h>
int main(){
    int t; //testcase kotobar dibo seta
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        int n;
        scanf("%d",&n);
        if(n==0){
            printf("0");
        }
        while(n>0){
            int digit = n%10;
            printf("%d ",digit);
            n/=10; //update state 
        }
    }
}