#include <stdio.h>
#include <string.h>

int main(){
    int my_array[10] = {7,3,5,1,8,0};

    int minValue = my_array[0];

    for(int i =0; i<7; i++){
        if( my_array[i] <minValue){
            minValue = my_array[i];
        }
    }
    printf("%d ", minValue);
    return 0;
}