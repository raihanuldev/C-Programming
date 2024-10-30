#include <stdio.h>
#include <stdlib.h>
int main(){
    // int *arr = malloc(5*sizeof(int));
    int *arr = calloc(5,sizeof(int));

    for(int i =0; i<5; i++){
        arr[i] = i+1;
    }

    //
    int *temp = arr;
    // relocate 

    arr = realloc(arr,10 * sizeof(int));
    
    if(arr ==NULL){
        arr = temp;
    }

    for(int i = 5; i<10; i++){
        arr[i] = i+1;
    }

    for(int i =0; i<10; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}