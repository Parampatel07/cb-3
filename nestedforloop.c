// wirite a programe to print hollow inverted piramid
#include <stdio.h>
void main()
{
    int count = 0, space = 0,row;

    for (count = 0; count < 5; count++)
    {
        printf("* ");
    }
    printf("\n");
    printf("* ");
    for(row=5;row>0;row--)
    {
        for (space = 0; space < row; space++)
        {
            printf(" ");
        }
        printf("* ");
        printf("\n");
        printf("* ");
    }
}