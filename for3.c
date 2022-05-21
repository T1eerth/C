#include<STDIO.H>
int sqrnum(int num);
int readnum(void);
int prompt(void);
int main(void)
{
    int t;
    for (prompt();t=readnum();sqrnum(t))
    sqrnum(t);
    return 0;
}
int promt(void)
{
    printf("enter a number:");
    return 0;
}
int readnum(void)
{
    int t;
    scanf("%d",&t);
    return t;

}

int sqrnum(int num)
{
    printf("%d",num*num);
    return num*num;
}