#include <stdio.h>

/*
 return_type function_name(parametars){
  statements;
  return
 }
*/ 

int add(int a,int b)
{
    int result = a+b;
    return result;
}

int main(){
    printf("%d\n",add(12,123));
    return 0;
}