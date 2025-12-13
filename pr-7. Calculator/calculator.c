
#include<stdio.h>

int add(int a,int b){
    return a + b;
}

int subtract(int a,int b){
    return a - b;
}

int multiply(int a,int b){
    return a * b;   
}

int divide(int a,int b){
    if(b == 0){
        printf("Error, division by 0 is not allowed\n");
        return 0;
    }
    return a / b;
}

int mod(int a,int b){
    if(b == 0){
        printf("Error, modulo by 0 is not allowed\n");
        return 0;   
    }
    return a % b;
}

int main(){
    int choice, a, b;

    while (1) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for / \n");
        printf("Press 5 for %% \n");
        printf("Press 0 for exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0){
            printf("Exiting program...\n");
            break;
        }

        printf("Enter the first number a: ");
        scanf("%d", &a);
        printf("Enter the second number b: ");
        scanf("%d", &b);

        switch (choice)
        {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, subtract(a, b));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, multiply(a, b));
                break;

            case 4:
                printf("Division of %d and %d is %d\n", a, b, divide(a, b));
                break;

            case 5:
                printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}