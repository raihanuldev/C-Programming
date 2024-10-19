#include <stdio.h>

int main(){
    int a[100000];
    int length;
    scanf("%d",&length);

    for(int i=0; i<length;i++){
        scanf("%d",&a[i]);
    }

    int index,value;
    scanf("%d %d",&index,&value);
    length++; //for incresing one length;
    
    for(int i = length-1; i >= index; i--){
        a[i+1] = a[i];
    }
    a[index]= value;

    for(int i=0; i<length;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

/*
index:  0 1 2 3 4
value:  1 2 3 4 5

now i want to to set 3 index 12 value;

*/