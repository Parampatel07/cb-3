// write a programe to make claculator for which only stop when user says
#include <stdio.h>
void main()
{
    int num1, num2, option, result,count;
    for(count=0;option!=0;count++)
    {
        printf("Enter value for num1");
        scanf("%d",&num1);
        printf("Enter value for num2");
        scanf("%d",&num2);
        printf("Enter 1 for addition\nEnter 2 for subtraction\nEntere 3 for multiplication\nEnter 4 for division\nEnter 0 for exit/stop");
        printf("\n Select any one option");
        scanf("%d",&option);
        if (option == 1)
        {
            result = num1 + num2;
            printf("\nResult is %d", result);
        }
        else if (option == 2)
        {
            result = num1 - num2;
            printf("\nResult is %d", result);
        }
        else if (option == 3)
        {
            result = num1 * num2;
            printf("\nResult is %d", result);
        }
        else if (option == 4)
        {
            result = num1 / num2;
            printf("\nResult is %d", result);
        }
        else
        {
            printf("\nInvalid input");
        }
    }
}