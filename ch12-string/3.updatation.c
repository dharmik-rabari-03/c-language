#include <stdio.h>

int main()
{

    char letter[6] = "hello";

    // static

    letter[1] = 'y';

    printf("%s\n", letter);

    // dynamic

    printf("Enter Character To Change :\n");
    scanf("%c", &letter[2]);

    printf("%s", letter);

    return 0;
}