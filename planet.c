#include <stdio.h>
void main()
{
    int planet1, planet2,result;
    float mercury=57.91,venus=108.2,earth=149.6,mars=227.9,jupiter=778.5,saturn=1000.434,urauns=2000.781,neptune=4000.495;

    printf("Enter 1 for mercury \n");
    printf("Enter 2 for venus \n");
    printf("Enter 3 for earth \n");
    printf("Enter 4 for mars \n");
    printf("Enter 5 for jupiter \n");
    printf("Enter 6 for saturn \n");
    printf("Enter 7 for uranus \n");
    printf("Enter 8 for neptune \n");
    printf("Select any one planet1 \n");
    scanf("%d",&planet1);
    
    printf("Enter 1 for mercury \n");
    printf("Enter 2 for venus \n");
    printf("Enter 3 for earth \n");
    printf("Enter 4 for mars \n");
    printf("Enter 5 for jupiter \n");
    printf("Enter 6 for saturn \n");
    printf("Enter 7 for uranus \n");
    printf("Enter 8 for neptune \n");
    printf("Select any one planet2 \n");
    scanf("%d",&planet2);

    if(planet1==1)
    {
        if(planet2==1)
        {
            printf("both are same");
        }
        else if(planet2==2)
        {
            result=mercury-venus;
            printf("value of distance is %d",result);
        }
    }
}