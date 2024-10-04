#include <stdio.h>

int main()
{
    int frist, senound;
    char operator;
    printf("Welcome to jog biog home!!\n");
    printf("enter your frist digit: ");
    scanf("%d\n",&frist);
    printf("enter your operator: ");
    scanf("%c\n", &operator);
    printf("Enter your secound digit: ");
    scanf("%d",&senound);
    printf("%c", operator);
    if(operator= "-"){
        printf("%d", frist-senound);
    }else{
        printf("%d", frist+senound);
    }
}