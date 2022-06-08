// write a programe to print a is greater if it is 
#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    
    if(a > b) // < > <= >= == != 
    {
        printf("a is greater");
    }
    printf("Goodbye..");
}