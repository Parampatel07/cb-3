//char - charater
// a,e,i,o,u, - vowel {swar}
// all other - consonents {vyanjan}
/*
|| - or 
&& - and
*/
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter letter");
    scanf("%c",&letter);
    
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o'|| letter=='u')
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is consonent");
    }
    printf("\nGoodbye..");
}