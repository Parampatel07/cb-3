// write a programe to make calculator
//  1- addtion
//  2- subtraction
//  3- multipication
//  4- division
#include <stdio.h>
void main()
{
    int option;
    float result, num1, num2;
    printf("Enter value of num1");
    scanf("%f", &num1);
    printf("Enter value of num2");
    scanf("%f", &num2);
    printf("Enter 1 for addtion \n Enter 2 for subtraction \n Enter 3 for multiplication \n Enter 4 for division");
    scanf("%d", &option);
    if (option == 1) // < > <= >= == !=
    {
        result = num1 + num2;
        printf("result = %f", result);
    }
    else if (option == 2)
    {
        result = num1 - num2;
        printf("result = %f", result);
    }
    else if (option == 3)
    {
        result = num1 * num2;
        printf("result = %f", result);
    }
    else if (option == 4)
    {
        result = num1 / num2;
        printf("result = %f", result);
    }
    else
    {
        printf("invalid input\n");
    }
    printf("\ngoodbye..");
}