#include <stdio.h>

int main()
{

    int num = 5;

    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= num - i; k++)
        {
            printf(" ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}