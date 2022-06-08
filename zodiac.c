#include<stdio.h>
void main()
{
    int date,month;

    printf("Enter your birth month");
    scanf("%d",&month);
    printf("Enter your birth date");
    scanf("%d",&date);

    if((month==3 && date>=21) || (month==4 && date<=19))
    {
        printf("your sign is aires \n symbol is The ram");
    }
    if ((month==4 && date>=20 ) || (month==5 && date<=20))
    {
        printf("Your sign is Taurus \n symbol is The bull");
    }
    if((month==5 && date>=21) || (month==6 && date<=20))
    {
        printf("YOur sign is Gemini \n symbol is The twins");
    }
}