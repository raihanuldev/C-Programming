#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("You Have got A+");
    }
    else if (marks >= 70)
    {
        printf("You have got A");
    }
    else if (marks >= 60)
    {
        printf("You have  got A-");
    }
    else if (marks >= 50)
    {
        printf("You have got B");
    }
    else if(marks>=40 && marks <=34){
        printf("you have got C");
    }
    else if(marks<=39){
        printf("you are fail");
    }
}