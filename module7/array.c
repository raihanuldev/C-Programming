#include <stdio.h>

int main(){
    int students[5];
    for(int i =0; i<5;i++){
        scanf("%d", &students[i]);
    }
    // printf("%d ",students[1]);
    for(int i =0; i<5;i++){
        printf("%d ", students[i]);
    }
    return 0;
}