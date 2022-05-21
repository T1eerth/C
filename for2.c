#include<stdio.h>
int main()
{
    int x;
    int z;
    for(x=100;x!=65;x-=5){
        z=x*x;
        printf("the square of %d is %d",x,z);
    }
}