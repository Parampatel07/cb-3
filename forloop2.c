// write a program to print following series (Lucas series)
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300
#include<stdio.h>
void main()
{
    int first = 2, second = 1, result,count;
    result = first + second;
    printf("result is %d \n", result);
    for(count=0;result<123;count++)
    {
        first = result;
        result = second + result;
        printf("Result is %d \n", result);
        second = result;
        result = first + result;
        printf("Result is %d \n", result);
    }
}