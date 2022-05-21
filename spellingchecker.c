#include<stdio.h>
void menu(void)
{
    char ch;
    printf("1. Check spelling\n");
    printf("2. Correct spelling errors\n");
    printf("3. Display spelling errors\n");
    printf("       Enter your choice:");
    do{
        ch=getchar();
        switch (ch){
            case '1':
            check_spelling();
            break;
            case '2':
            correct_errors();
            break;
            case '3':
            display_errors();
            break;
        }
            
    } while(ch!='1' && ch!='2' && ch!='3');
}
