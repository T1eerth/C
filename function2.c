#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("enter the first number",a);
    scanf("%d",&a);
    printf("Enter the second number",b);
    scanf("%d",&b);
    int s= sum(a,b);
    printf("The sum of the two number is %d",s);
    return 0;

}
int sum(int a,int b){
    return a+b;
}