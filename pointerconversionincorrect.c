#include<stdio.h>
int main(void)
{
    double x=100.1,y;
    int *p;
    p=(int*)&x;
    y=*p;
    printf("The (incorrect) value of x is : %f",y);
    return 0;
}