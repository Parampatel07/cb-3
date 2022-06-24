#include<stdio.h>

void Getsum(int abcde)
{
    printf("answer is %d",abcde);
}
void main()
{
    int a=10,b=20,c;

    c=a+b;
    Getsum(c);
}