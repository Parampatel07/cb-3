// write a program to make claclulator
// 1-addtion
// 2-subtraction
// 3-multiplication
// 4-division
#include <stdio.h>
void main()
{
    int num1, num2, select,result;

    printf("Enter value for num1");
    scanf("%d", &num1);
    printf("Enter value for num2");
    scanf("%d", &num2);
    printf("Enter 1 for addtion \nenter 2 for subtraction\nenter 3 for multiplication \nEnter 4 for division");
    scanf("%d", &select);

    // < > <= >= == !=
    if (select == 1)
    {
        result=num1+num2;
        printf("Answer is %d",result);
    }
    else if(select == 2)
    {
        result=num1-num2;
        printf("Answer is %d",result);
    }
    else if(select == 3)
    {
        result=num1*num2;
        printf("Answer is %d",result);
    }
    else if(select == 4)
    {
        result= num1/num2;
        printf("Answer is %d",result);
    }
    else
    {
        printf("Invalid selcetion");
    }
    printf("goodbye");
}