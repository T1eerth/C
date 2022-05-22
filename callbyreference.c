#include<stdio.h>

void swap(int* ,int* );

int main()
{
    int a, b;
    printf("Enter the numbers to swap: ");
    scanf("%d %d",&a, &b);
    swap(&a, &b);

    return 0;
}

void swap(int *e, int *f)
{
    int c;
    c= *e;
    *e= *f;
    *f= c;
    printf("%d %d", *e, *f);
}