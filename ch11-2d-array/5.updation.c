#include <stdio.h>

int main()
{

    // static

    int num[3][3] = {{1, 2, 3}, 
                     {4, 5, 6},
                     {7, 8, 9}};


    num[0][0] = 80;

    printf("%d\n", num[0][0]);

    // dynamic

    printf("enter number");

    scanf("%d", &num[2][2]);

    printf("%d", num[2][2]);

    return 0;
}