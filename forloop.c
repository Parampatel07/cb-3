// write  a programe to print 1,3,5,7,9...200
#include <stdio.h>
void main()
{
    int number = 1, count = 0;
    for(count=0;count<100;count++)
    {
        printf("%d ", number);
        number = number + 2;
    }
}