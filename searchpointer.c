#include<stdio.h>
#include<string.h>
int search(char*p[],char *name);
char *names[]={"herb","rex","dennis","john",NULL};
int main(void)
{
    if(search(names,"dennis")!=-1)
    printf("dennis is in the list.\n");
    if(search(names,"bill")==1)
    printf("bill is not found int the list");
    return 0;
   


