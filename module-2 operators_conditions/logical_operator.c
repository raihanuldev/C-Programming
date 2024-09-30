#include <stdio.h>
#include <stdbool.h>

int main(){
    bool result = !((4>3) && (4<7) || (8<3));
    // ! sing means whole result convert. 
    printf("%d", result);
    return 0;
}