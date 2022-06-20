#include <stdio.h>
void main()
{
    int students[5], count = 0;
    float marks[50];
    char letter[20];

    students[0] = 20;
    students[1] = 30;
    students[2] = 40;
    students[3] = 50;
    students[4] = 60;

    for(count=0;count<5;count++)
    {
        printf("Enter value for %d student",count+1);
        scanf("%d",&students[count]);
    }
    for (count = 0; count < 5; count++)
    {
        printf("Enter value for student %d = %d \n", count + 1, students[count]);
    }
}