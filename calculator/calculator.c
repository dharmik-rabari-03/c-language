#include <stdio.h>

int main()
{

    int a, b;
    char operation;

    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);

    printf("enter an operator (+,-,*,/): ");
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
    printf("Error operator is not correct");
    
        
    }

    return 0;
}
