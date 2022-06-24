#include<stdio.h>

// without argument without return
void printline()
{
    printf("\n----------------------------------------------------------------\n");
}

//with argument without return
void printany(char a)
{
    printf("\n %c %c %c %c %c %c %c %c %c %c \n",a ,a ,a, a, a, a, a, a, a, a );
}

void main()
{
    printline();
    printf("param patel\n");
    printline();
    printf("the easy learn academy");
    printany('&');
    printf("Akshar vadi");
    printany('0');
}