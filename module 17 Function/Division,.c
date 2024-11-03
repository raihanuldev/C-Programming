#include <stdio.h>

int main(){
    int tCase;
    scanf("%d",&tCase);

    for(int i =0; i<tCase; i++){
        int ratings;
        scanf("%d",&ratings);

        if(ratings >= 1900 && ratings <= 5000){
            printf("Division 1\n");
        }
        if(ratings >= 1600 && ratings <= 1899){
            printf("Division 2\n");
        }
        if(ratings >=1400 && ratings <= 1599){
            printf("Division 3\n");
        }
        if(ratings >= -5000 && ratings <= 1399){
            printf("Division 4\n");
        }
    }

    return 0;
}