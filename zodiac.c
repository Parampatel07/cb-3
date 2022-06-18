// input month in number date in number
#include<stdio.h>
void main()
{
    int month,date;

    printf("Enter value for month");
    scanf("%d",&month);
    printf("Enter value for day");
    scanf("%d",&date);

    if((month==3 && date>=21)||(month==4 && date<=19))
    {
        printf("Your sign is Aries and Symbol is the ram ");
    }
    else if ((month==4 && date>=20)||(month==5&&date<=20))
    {
        printf("Your sign is Tarus and Symbol is The bull");
    }
    else if ((month==5 && date>=21)||(month==6 && date<=20))
    {
        printf("Your sign is Gemini and Symbol is The Twins");
    }
}