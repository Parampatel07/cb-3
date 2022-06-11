// write a programe to print even number till 500
#include <stdio.h>
void main()
{
    int number = 2,count,i=1;
    printf("Enter value for even number");
    scanf("%d",&count);
    while(i<=count)
    {
        printf("%d \n", number);
        number = number + 2;
        i=i+1;
    }
}