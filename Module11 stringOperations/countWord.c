#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char s[1000001];
    fgets(s,sizeof(s),stdin);
    int length = strlen(s);
    int count = 0;
    int word = 0;

    for(int i =0; i<length; i++){
        if(isalpha(s[i])){
            if(!word){
                count++;
                word = 1;
            }
        }else{
            word = 0;
        }
    }
    printf("%d",count);
    return 0;
}