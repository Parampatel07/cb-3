// write a programe to print 1,8,27,64,125....800.
#include <stdio.h>
void main()
{
    int number = 1, result = 1;

    // printf("value of number is %d",number);
    do
    {
        printf("%d ,", result);
        number = number + 1;
        result = number * number * number;
    }while(result<800);
}