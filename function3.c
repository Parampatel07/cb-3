// write a programe to peform swap using function
#include<stdio.h>
void GetSwap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("Value for a is %d and b is %d",a,b);
}
void main()
{
    int a,b;
    printf("Enter value for a");
    scanf("%d",&a);
    printf("enter value for b");
    scanf("%d",&b);

    GetSwap(a,b);
    GetSwap(b,a);
}