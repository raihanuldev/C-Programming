#include <stdio.h>

void isPailndrome(int num){
    int binary[32],index =0;

    while(num>0){
        binary[index++]=num%2;
        num/=2;
    }
    for(int i =0; i<index/2; i++){
        if(binary[i]!= binary[index-i -1]){
            printf("NO");
            break;
        }
    }
    printf("YES");
}

void isWonderful(int num){
    if(num%2!=0){
        isPailndrome(num);
    }else{
        printf("NO");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    isWonderful(n);
}