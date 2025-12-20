#include <stdio.h>

int main()
{
    int mark;
    char grade;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    grade = (mark >= 90) ? 'A' : (mark >= 80) ? 'B'
                             : (mark >= 60)   ? 'C'
                             : (mark >= 35)   ? 'D'
                             : 'F';

    printf("Your grade is %c\n", grade);

    switch (grade)
    {

    case 'A':
        printf("Excellent work!\n");
        break;

    case 'B':
        printf("Well done!\n");
        break;

    case 'C':
        printf("Good job!\n");
        break;

    case 'D':
        printf("You passed, but can improve.\n");
        break;

    default:
        printf("Sorry, you failed.\n");
    }

    if (mark >= 90)
        printf("You are eligible for the next level.\n");
    else if (mark >= 80)
        printf("You are eligible for the next level.\n");
    else if (mark >= 60)
        printf("You are eligible for the next level.\n");
    else if (mark >= 35)
        printf("You are eligible for the next level.\n");
    else
        printf("Not eligible. Try again.\n");

    return 0;
}