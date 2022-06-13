#include <stdio.h>
void main()
{
    int r = 0,c=4;
    while(c>=0)
    {
        while (r <= c)
        {
            printf("* ");
            r++;
        }
        printf("\n");
        r = 0;
        c--;
    }
}