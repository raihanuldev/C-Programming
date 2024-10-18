#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int distinct[26] = {0};
    int count = 0;

    scanf("%s", &name);


    //distring kori cole
    for(int i=0; i<strlen(name); i++){
        
        if(distinct[name[i]-'a']==0){
            distinct[name[i]-'a']=1;
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}