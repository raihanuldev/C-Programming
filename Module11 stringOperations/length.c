#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "helloworl";
    // int length = strlen(str);
    char b[10];
    strcpy(b,str);
    printf("%s",b);

}