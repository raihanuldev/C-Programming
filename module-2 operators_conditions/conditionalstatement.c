#include <stdio.h>

int main(){
    // 
    int balance = 50;
    int egg_price = 30;
    int coffee = 20;
    int remain;
    if(egg_price <= balance){
        printf("Egg Nia asis \n");
        remain = balance-egg_price;
        if(remain <= coffee){
            printf("Please bring a coffee for me\n");
            remain = 0;
        }
        else{
            printf("Baki taka ghula tui kichu kais bhai! ");
        }
    }
    else{
        printf("I don't have enogh money for buy Egg. Sorry iam Goribs");
    }
}