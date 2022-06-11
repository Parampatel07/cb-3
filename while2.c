// write a programe to print your name 100 times
#include <stdio.h>
void main()
{
    int count = 1,number=0;
    printf("Enter number");
    scanf("%d",&number);
    while(count<number)
    {
        printf("param - %d \n",count);
        count = count + 1;
    }
}