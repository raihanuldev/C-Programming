#include <stdio.h>
#include <stdbool.h>

int main(){
    bool result = !((4>3) && (4<7));
    printf("%d", result);
    return 0;
}