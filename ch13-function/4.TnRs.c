#include <stdio.h>

int addition()
{
    return 5 + 10;
}

int square()
{
    int value = 2;
    return value * value;
}

int main()
{

    int result1 = addition();
    printf("result 1 : %d\n", result1);

    int result2 = square();
    printf("result 2 : %d", result2);

    return 0;
}