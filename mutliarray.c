#include <stdio.h>
void main()
{
    int students[5][5], count, std = 0, total_marks[5];
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
    total_marks[0] = 0;
    for (count = 0; count < 5; count++)
    {
        total_marks[0] = total_marks[0] + students[0][count];
    }
    printf("\n\nTotal marks for student 1 are %d", total_marks[0]);
    total_marks[1] = 0;
    for (count=0;count<5;count++)
    {
        total_marks[1] = total_marks[1] + students[1][count];
    }
    printf("\n\nTotal marks for student 2 are %d", total_marks[1]);
}