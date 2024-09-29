#include <stdio.h>

// Problem: Why not showing input texts?please explain me.

int main(){
    int age,number;
    float kg;
    char name;
    scanf("%d %d Integer value:\n ", &age,&number);
    scanf("%f floate value: \n", &kg);
    scanf("%c give char input: \n",&name);
    printf(" kg: %f\n",kg);
    printf("Int values: %d %d \n", age,number);
    printf(" Char output: %c\n ", name);
}