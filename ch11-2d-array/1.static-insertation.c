#include <stdio.h>

int main()
{

    int number[3][3] = {};

    number[0][0] = 1;

    number[0][1] = 2;

    number[0][2] = 3;

    number[1][0] = 4;

    number[1][1] = 5;

    number[1][2] = 6;

    number[2][0] = 7;

    number[2][1] = 8;

    number[2][2] = 9;

    printf("%d\n", number[0][0]);
    printf("%d\n", number[0][1]);
    printf("%d\n", number[0][2]);

    printf("%d\n", number[1][0]);
    printf("%d\n", number[1][1]);
    printf("%d\n", number[1][2]);

    printf("%d\n", number[2][0]);
    printf("%d\n", number[2][1]);
    printf("%d\n", number[2][2]);

    return 0;
}