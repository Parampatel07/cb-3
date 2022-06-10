// write a programe to take alphabet form user and find it is vowel or not
// a,e,i,o,u =swar,vowels
#include <stdio.h>
void main()
{
    char letter;
    printf("Enter value for letter ");
    scanf("%c",&letter);
    if (letter == '0' || letter == '1' || letter == '2' || letter == '3' || letter == '4' || letter == '5' || letter == '6' || letter == '8' || letter == '9')
    {
        printf("Invalid input");
    }
    else
    {
        switch(letter)
        {
        case 'a':
            printf("it is vowel");
            break;

        case 'e':
            printf("it is vowel");
            break;

        case 'i':
            printf("it is vowel");
            break;

        case 'o':
            printf("it is vowel");
            break;

        case 'u':
            printf("it is vowel");
            break;

        default:
            printf("it is consonent");
            break;
        }
    }
}