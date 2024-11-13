#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

char *hello(){
    static char word[100] = "Hello World";
    return word;
}

int main(){
    // printf("%d",sum(89,34));
    printf("%s",hello());
    return 0;
}