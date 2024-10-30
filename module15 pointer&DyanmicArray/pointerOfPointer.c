#include <stdio.h>

int main()
{
  int x,y,z;
    x = 10, y = 20, z = 30;
    int *p, *q;
    p = &x;
    q = &y;
    *p = 40;
    x = 50;
    q = p;
    printf("%d",*q);
    return 0;
}