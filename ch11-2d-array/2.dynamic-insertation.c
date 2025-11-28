#include <stdio.h>

int main()
{

    int num[3][3] = {};

    printf("Enter Number");

    scanf("%d", &num[0][0]);
    scanf("%d", &num[0][1]);
    scanf("%d", &num[0][2]);

    scanf("%d", &num[1][0]);
    scanf("%d", &num[1][1]);
    scanf("%d", &num[1][2]);

    scanf("%d", &num[2][0]);
    scanf("%d", &num[2][1]);
    scanf("%d", &num[2][2]);



    printf("first element :%d\n", num[0][0]);
     printf("second element :%d\n", num[0][1]);


    return 0;
}