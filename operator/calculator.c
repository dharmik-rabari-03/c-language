#include <stdio.h>

int main()
{
    int a, b;
    char operation;

    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter first number: \n");
    scanf("%d", &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

        case '*':
        printf("%d", a * b);
        break;

        case '/':
        printf("%d", a / b);
        break;

        default:
        printf("Error! operator is not correct");
        

    }
}