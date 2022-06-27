//write a programe to pefor addtion using function with return value
#include<stdio.h>
int GetSum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void main()
{
    int num1,num2,result;

    // printf("enter value for num1");
    // scanf("%d",&num1);
    // printf("Enter value for num2");
    // scanf("%d",&num2);
    num1=50;
    num2=100;
    result=GetSum(num1,num2);
    printf("result is %d",result);

    num1=45;
    num2=45;
    result=GetSum(num1,num2);
    printf("result is %d",result);
}