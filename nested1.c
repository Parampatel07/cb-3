// write a program to print digit in words
// 56 -> five six
// 78 -> seven eight
#include <stdio.h>
void main()
{
    int number, first_num, second_num;

    printf("Enter only three digit number");
    scanf("%d", &number);
    // < > <= >= == !=

    if (number >= 100)
    {
        printf("invalid input");
    }
    else
    {
        // printf("\n %d number", number);

        first_num = number % 10;
        second_num = number / 10;

        // printf("first number is %d second number is %d", first_num, second_num);

        if (second_num == 1)
        {
            printf("one");
        }
        else if (second_num == 2)
        {
            printf("two");
        }
        else if (second_num == 3)
        {
            printf("three");
        }
        else if (second_num == 4)
        {
            printf("four");
        }
        else if (second_num == 5)
        {
            printf("five");
        }
        else if (second_num == 6)
        {
            printf("six");
        }
        else if (second_num == 7)
        {
            printf("seven");
        }
        else if (second_num == 8)
        {
            printf("eight");
        }
        else if (second_num == 9)
        {
            printf("nine");
        }
        else if (second_num == 0)
        {
            printf("zero");
        }

        if (first_num == 1)
        {
            printf("one");
        }
        else if (first_num == 2)
        {
            printf("two");
        }
        else if (first_num == 3)
        {
            printf("three");
        }
        else if (first_num == 4)
        {
            printf("four");
        }
        else if (first_num == 5)
        {
            printf("five");
        }
        else if (first_num == 6)
        {
            printf("six");
        }
        else if (first_num == 7)
        {
            printf("seven");
        }
        else if (first_num == 8)
        {
            printf("eight");
        }
        else if (first_num == 9)
        {
            printf("nine");
        }
        else if (first_num == 0)
        {
            printf("zero");
        }
    }
}