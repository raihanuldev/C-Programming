#include <stdio.h>

void fun2(){
    printf("Func2\n");
}

void fun1(){
    printf("befoire Function call from functon11\n");
    fun2();
    printf("after func 2 excution\n");
}


int main(){
    printf("Function call from Main\n");
    fun1();
    printf("Function call from main\n");
    return 0;
}