// write a programe to make calclutar using function with argument and with return 
#include<stdio.h>
int GetSum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int GetSub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
float GetMulti(int a,int b)
{
    float c;
    c=a*b;
    return c;
}
float GetDiv(int a,int b)
{
    float c;
    c=a/b;
    return c;
}
void main()
{
    int num1,num2;

    printf("Enter value for num1");
    scanf("%d",&num1);
    printf("Enter value for num2");
    scanf("%d",&num2);
    printf("Select 1 for addtion \n Select 2 for subtraction \n 3 fof multipilcation \n 4 for division ");
    printf("\n Select any one option");
}