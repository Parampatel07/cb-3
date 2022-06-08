//write a programe to find which value is greater 
#include<stdio.h>
void main()
{
    float number1 , number2;
    printf("Enter value of number1");
    scanf("%f",&number1);
    printf("entre value of number2");
    scanf("%f",&number2);

    if(number1>=number2)
    {
        printf("number1 is greater than number2\n");
    }
    else
    {
        printf("number2 is greater than number 1\n");
    }
    printf("goodbye..");
}