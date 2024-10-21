#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i =0; i<n; i++){
        char s[101];
        scanf("%s",s);
        int len = strlen(s);
        if(len>10){
            char fristCh = s[0];
            char lastCh = s[len-1];
            // printf("%d",len);
            printf("%c%d%c\n",fristCh,len-2,lastCh);
        }else{
            printf("%s\n",s);
        }
    }


    return 0;
}