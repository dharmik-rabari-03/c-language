// #include <stdio.h>

// int main(){

//     int num=10;

//     for (int i=1; i<=num;i++)
//     {
//         if (i==7)
//         {
//             break;
//         }
//         printf("%d\n",i);

//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int day=1;

    switch (day)
    {

    case 1:
        printf("sunday");
        break;

    case 2:
        printf("monday");
        break;

    case 3:
        printf("tuesday");
        break;

    case 4:
        printf("wednesday");
        break;

    case 5:
        printf("thursday");
        break;

    case 6:
        printf("friday");
        break;

    case 7:
        printf("saturday");
        break;

    default:
        printf("invalid choice please select correctly");
    }

    return 0;
}