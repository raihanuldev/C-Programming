#include <stdio.h>

// Problem: Why not showing input texts?please explain me.

int main(){
    int age,number;
    float kg;
    char name;
    printf("Int vlaue");
    scanf("%d %d \n ", &age,&number);
    scanf("%f  \n", &kg);
    scanf("%c  \n",&name);
    printf("  %f\n",kg);
    printf("Int values: %d %d \n", age,number);
    printf(" Char output: %c\n ", name);
    // access location
    // printf("%d", &number);
}