#include<stdio.h>
int main(void)
{
    int x[100];
    int t;
    for(t=0;t<100;t++) x[t]=t;
    for(t=0;t<100;t++) printf("%d\n",x[t]);

}