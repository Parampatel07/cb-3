// write a programe to find whether the given year is millinum year or not
// 1000,2000,3000,4000
#include<stdio.h>
void main()
{
    int year,result;
    printf("Enter year");
    scanf("%d",&year);
    result=year%1000;
    printf("result is %d",result);
    if(result==0) // < > <= >= == !=
    {
        printf("\nmillinuem year\n");
    }
    printf("Goodbye..");
}