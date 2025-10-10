
#include <stdio.h>

int main()
{


    //triangle Angle Finder


    
    float firstAngle, secondAngle, thirdAngle;

    printf("\nenter first angle : ");
    scanf("%f", &firstAngle);

    printf("\nenter second angle : ");
    scanf("%f", &secondAngle);

   

    thirdAngle=180 - (firstAngle +secondAngle);

    printf("\nthird angle : %.2f",thirdAngle);

    return 0;
}