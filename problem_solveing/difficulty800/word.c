#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    scanf("%s",&s);

    int upperCase =0;
    int lowerCase =0;

    for(int i =0; i<strlen(s); i++){
        if(s[i]> 64 && s[i]<91){
            upperCase++;
        }else{
            lowerCase++;
        }
    }
    
    if(upperCase >lowerCase){
        for(int i =0; i<strlen(s); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i =0; i<strlen(s); i++){
            s[i] = tolower(s[i]);
        }
    }

    printf("%s",s);
    return 0;
}