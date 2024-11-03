#include <stdio.h>
#define MAX_SIZE 100


int main(){
    int arr[MAX_SIZE],size,index;
    printf("enter the size of the array: %d",MAX_SIZE);
    scanf("%d",&size);

    if(size <=0 || size >MAX_SIZE){
        printf("Invaild Array Size\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    
    for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the index of the element to delete: ");
    scanf("%d",&index);

    if(index <=0 || index >=size){
        printf("Invaild Input Size");
        return 0;
    }
    // shift the element to the left index -1 to overwrite element

    for(int i = index+1; i <size; i++){
        arr[i-1] = arr[i];
    }
    size--;
    printf("Array after decleartion\n");
    for(int i =0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}