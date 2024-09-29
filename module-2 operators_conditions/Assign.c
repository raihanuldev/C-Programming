#include <stdio.h>

int main(){
    // =,==,+=,++,--,-=,/=,*=,%=
    int a = 100;
    int b = 5;

    // int result = a+=5;
    // int result = a-=5;
    // int result = a/=5;
    // int result = a%=5;
    int result = a++;
    printf("%d", result);
}