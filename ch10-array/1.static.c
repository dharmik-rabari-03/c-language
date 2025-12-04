#include <stdio.h>

int main()
{

    // predefined array

    int num[5] = {5, 4, 7, 8, 9};

    // undefined array

    int number[5] = {};

    // static

    number[0] = 5;

    number[1] = 9;

    number[2] = 7;

    number[3] = 8;

    number[4] = 6;

    printf("%d\n", number[1]);
    printf("%d\n", number[0]);
    printf("%d\n", number[3]);
    printf("%d\n", number[2]);

    return 0;
}