#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks >= 80  && marks <=100)
    {
        printf("You Have got A+");
    }
    else if (marks >= 70 && marks <=79)
    {
        printf("You have got A");
    }
    else if (marks >= 60 && marks <=69)
    {
        printf("You have  got A-");
    }
    else if (marks >= 50)
    {
        printf("You have got B");
    }
    else if (marks >= 33)
    {
        printf("you have got C");
    }
    else
    {
        printf("you are fail");
    }
}