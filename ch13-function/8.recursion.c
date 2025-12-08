#include <stdio.h>

int factorial(int n)
{

    if (n<0 || n==1)
    {
        return 1;
    }
    else
    {

        return n*factorial(n-1);
    }
}


int main(){



    int result = factorial(7);

    printf("%d\n",result);

    int result1 = factorial(4);

    printf("%d\n",result1);


    return 0;

}