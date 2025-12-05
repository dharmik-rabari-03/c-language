#include <stdio.h>

int main()
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    last = temp % 10;

    for ( temp=n; temp >= 10; temp = temp / 10){

    }

    first = temp;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
    printf("Sum = %d\n", first + last);

    return 0;
}
