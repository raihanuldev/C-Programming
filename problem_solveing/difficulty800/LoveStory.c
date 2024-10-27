#include <stdio.h>
#include <string.h>


int main(){
    int t;
    scanf("%d",&t);
    char loveString[10] = "codeforces";
    for(int i =0; i<t; i++){

        char inputString[10];
        scanf("%s",inputString);
        
        int len = strlen(inputString);
        int count =0;
        for(int i =0; i<len; i++){
            if(inputString[i]!=loveString[i]){
                count++;
            }
        }
        printf("%d ",count);


    }

    return 0;
}