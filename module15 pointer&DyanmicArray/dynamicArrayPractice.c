#include <stdio.h>
#include <stdlib.h>

int main(){
    int items = 10;
    int *arr = malloc(items * sizeof(int));

    for(int i =0; i<items; i++){
        arr[i] = i+1;
    }

    // relocate
    // int *temp = arr;
    items = 15;
    arr = realloc(arr, items * sizeof(int));

    for(int i =0; i<items; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
// keno ami arr rellocate korar somoy eikahne null paite pari bhai?
