#include<stdio.h>
void printtable(int n);
int main()
{
    int n;
    printf("Enter the table you wanna print for");
    scanf("%d",&n);
    printtable(n);
    return 0;

}
void printtable(int n){
    for(int i=0;i<=10;i++)
    printf("%d\n",n*i);

}