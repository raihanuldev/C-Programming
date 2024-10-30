#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000001];
    scanf("%s", &str);
    int strLen = strlen(str);
    int new[26];

    for(int i =0; i<strLen; i++){
        int index = str[i]-'a';
        new[index] +=1;
    }
    for(int i =0; i<26; i++){
        // printf("%d  ",new[i]);
        if(new[i] > 0){
            printf("%c : %d\n",'a'+i,new[i]);
        }
    }

    

    return 0;
}