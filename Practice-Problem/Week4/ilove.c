#include <stdio.h>
#include <string.h>


int main(){
    // int n;
    // scanf("%d",&n);
    char s[51],t[51];
    scanf("%s %s",s,t);

    int sLen = strlen(s);
    int tLen = strlen(t);

    for(int i =0; s[i]!='\0'; i++){
        printf("%c%c",s[i],t[i]);
    }
    return 0;
}