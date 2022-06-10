// write a programe to find area of three triagnle accpect value form user and find the gretest traiagnle

#include <stdio.h>
void main()
{
    int height1, base1, height2, base2, height3, base3;
    float area1, area2, area3;
    printf("Enter height 1 ");
    scanf("%d", &height1);
    printf("Enter base1 ");
    scanf("%d", &base1);
    printf("Enter height 2 ");
    scanf("%d", &height2);
    printf("Enter base2 ");
    scanf("%d", &base2);
    printf("Enter height 3 ");
    scanf("%d", &height3);
    printf("Enter base3 ");
    scanf("%d", &base3);
    area1 = (height1 * base1) * 0.5;
    // printf("Area 1 is %f",area1);
    area2 = (height2 * base2) * 0.5;
    // printf("Area 2 is %f",area2);
    area3 = (height3 * base3) * 0.5;
    // printf("Area 3 is %f",area3);
    if (area1 == area2 && area2 == area3)
    {
        printf("Invalid input");
    }
    else
    {
        if (area1 > area2)
        {
            if (area1 > area3)
            {
                printf("area1 is greater");
            }
            else
            {
                printf("Area 3 is greater");
            }
        }
        else
        {
            if (area2 > area3)
            {
                printf("Area 2 is greter");
            }
            else
            {
                printf("area 3 is greter");
            }
        }
    }
}