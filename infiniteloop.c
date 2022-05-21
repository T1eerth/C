#include<STDIO.H>
int main()
{
    char ch;
    ch='\0';
    for(;;){
        ch=getchar();
        if (ch=='a') break;
    }
    printf("you typed an a");
}