#include<stdio.h>
int main(void)
{
    int x=99;
    int *p1,*p2;
    p1=&x;
    p2=p1;
    printf("Values at p1 nd p2: %d %d\n",*p1,*p2);
    printf("addresses pointed to by p1 and p2: %p %p",p1,p2);
    return 0;

}