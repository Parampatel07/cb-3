//write a programe to pefrom swap
#include<stdio.h>
void main()
{
    float num1,num2,copy;
    printf("enter value of num1");
    scanf("%f",&num1);
    printf("enter value of num2");
    scanf("%f",&num2);
    copy=num1;// copy num1 in copy variable
    num1=num2;
    num2=copy;
    printf("value of num1=%f and num2=%f",num1,num2);
}