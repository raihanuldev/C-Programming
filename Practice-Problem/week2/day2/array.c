#include <stdio.h>

int main(){
    int rolls[10];
    for(int i=0; i<10; i++){
        scanf("%d", &rolls[i]);
    }
    // operation of array
    printf("Array total element %d ", sizeof(rolls)/4);
    return 0;
}