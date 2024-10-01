#include <stdio.h>

int main(){
    char s[500];
    // printf("enter your text: ");
    scanf("%[^\n]s", s);
    printf("Hello World!\n");
    printf("%s\n", s);
}
