#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int substraction(int a, int b)
{
    return a - b;
}

int main()
{

    int result1 = addition(10 , 15);
    int result2 = substraction(20 , 15);

    printf("result1 :%d\n", result1);
    printf("result2 :%d\n", result2);

    return 0;
}