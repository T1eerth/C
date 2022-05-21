#include<stdio.h>
#define max 100
#define len 80
char text[max][len];
int main (void)
{
    register int t,i,j;
    printf("enter a empty line to exit\n");
    for(t=0;t<max;t++){
        printf("%d:",t);
        gets(text[t]);
        if(!*text[t]) break;

    }
    for(i=0;i<j;i++){
        for (j=0;text[i][j];j++) putchar(text[i][j]);
    }
    return 0;
}
