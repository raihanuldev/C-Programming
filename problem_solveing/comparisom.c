#include <stdio.h>

int main()
{
    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, & b);

    if (operator== '>')
    {
        if (a > b)
        {

            printf("Right");
        }
        else
        {

            printf("Wrong");
        }
    }
    else if(operator =='='){
        if(a==b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else
    {
        if (a < b)
        {

            printf("Right");
        }
        else
        {

            printf("Wrong");
        }
    }

    return 0;
}