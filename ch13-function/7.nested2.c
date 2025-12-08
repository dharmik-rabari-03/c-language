#include <stdio.h>

int addition()
{
    return 10 + 5;
}

void result()
{

    int result = addition();

    printf("addition number :%d", result);
}

int main()
{

    result();

    return 0;
}