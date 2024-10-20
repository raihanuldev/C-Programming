#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    scanf("%s",str);

    int num =0;
    int count=0;
    for(int i =0; i<strlen(str); i++){
        int digit = str[i]-'0';
        count+=digit;
        num = num*10+digit;
    }

    // for(int i =0; i<strlen(str);)
    printf("%d",count);
    return 0;
}