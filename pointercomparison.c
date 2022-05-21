#include<stdio.h>
#include<stdlib.h>
void push(int i);
int pop(void);
int *tos,*p1,stack[50];
int main(void)
{
    int value;
    tos=stack;
    p1=stack;
    do{
        printf("enter value:");
        scanf("%d",&value);
        if (value!=0) push(value);
        else printf("value on top is %d\n",pop());
    } while(value!=-1);
    return 0;
}
void push(int i)
{
    p1++;
    if(p1==(tos+50)) {
        printf("Stack Overflow.\n");
        exit(1);
    }
    p1--;
    return *(p1+1);
}
