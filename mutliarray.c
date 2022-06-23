#include <stdio.h>
void main()
{
    int students[5][5], count, std = 0, total_marks[5], average = 0,average2=0,counter;
    do
    {
        printf("Enter marks for student %d \n", std + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter marks for subject %d  ", count + 1);
            scanf("%d", &students[std][count]);
        }
        std++;
    } while (std <= 4);
    std = 0;
    while (std < 5)
    {
        printf("\nMarks for student %d are", std + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\n %d subject marks are %d  ", count + 1, students[std][count]);
        }
        std++;
    }
    for (std = 0; std < 5; std++)
    {
        total_marks[std] = 0;
        for (count = 0; count < 5; count++)
        {
            total_marks[std] = total_marks[std] + students[std][count];
        }
        printf("\n\nTotal marks for student %d are %d", std + 1, total_marks[std]);
    }
    counter = 0;
    while(counter<5)
    {
        average = average + total_marks[counter];
        counter++;
    }
    printf("\ntotal of total's is %d",average);
    average2=average/5;
    printf("\nAverage of all students is %d",average2);
}