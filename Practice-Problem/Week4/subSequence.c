#include <stdio.h>
#include <string.h>

int main(){
    char s[100001];
    scanf("%s",s);
    int len = strlen(s);
    char animee[6]= "hello";
    int focus = 0;

    for(int i =0; i<len; i++){
        if(s[i]==animee[focus]){
            focus++;
        }

    }
    if(focus==5){
        printf("YES");
    }else{
        printf("NO");
    }
    // printf("%d",focus);


    return 0;
}