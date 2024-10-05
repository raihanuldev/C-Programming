#include <stdio.h>
int main(){
    char number[6];
    int sum =0;
    scanf("%5s", number);
    for(int i=0; i<5;i++){
        sum+= number[i]-'0';
    }
    printf("%d", sum);
}