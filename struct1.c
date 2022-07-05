//#write a programe to to take time of three countires and dislpay time of country of useres choice
#include<stdio.h>
struct country
{
    float time1;
    int day;
    char name;
};
void main()
{
    struct country t1,t2,t3;
    printf("Enter value first country");
    scanf("%f",&t1.time1);
    printf("Enter day of first country");
    scanf("%d",&t1.day);
    fflush(stdin);
    printf("Enter first letter off your country  \n");
    scanf("%c",&t1.name);

    fflush(stdin);
    printf("Enter time for second country");
    scanf("%f",&t2.time1);
    printf("Enter day for second country");
    scanf("%d",&t2.day);
    fflush(stdin);
    printf("Enter first letter off second country \n");
    scanf("%c",&t2.name);

    
    fflush(stdin);
    printf("Enter time for third country");
    scanf("%f",&t3.time1);
    printf("Enter day for third country");
    scanf("%d",&t3.day);
    fflush(stdin);
    printf("Enter first letter off third country \n");
    scanf("%c",&t3.name);


    printf("Time of first country is %f \n Day of first country is %d\n first letter of first country is %c \n",t1.time1,t1.day,t1.name);
    printf("Time of second country is %f \n Day of second country is %d\n first letter of second country is %c \n",t2.time1,t2.day,t2.name);
    printf("Time of third country is %f \n Day of third country is %d\n first letter of third country is %c \n",t3.time1,t3.day,t3.name);
}