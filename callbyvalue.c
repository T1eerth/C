#include<stdio.h>
void add(int a,int b);
int main()
{
    int a,b;
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter the number");
    scanf("%d",&b);
    add(a,b);
    return 0;
}
void add(int a,int b){
    printf("the sum is %d",a+b);
    
}