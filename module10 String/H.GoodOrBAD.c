#include <stdio.h>
#include <string.h>

int main()
{
    int tcase;
    char s[100001];
    scanf("%d", &tcase);

    for (int i = 0; i < tcase; i++)
    {
        char s[100001];
        scanf("%s", s);

        int isGood = 0;
        int length = strlen(s);

        for (int j = 0; j < length - 2; j++)
        {
            if (
                s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0' ||
                s[j] == '1' && s[j+1] == '0' && s[j+2] == '1'
            ){
                isGood =1;
            }
        }
        
        if(isGood){
            printf("Good\n");
        }else{
            printf("Bad\n");
        }
    }

    return 0;
}