
#include <stdio.h>


int main(){

    // celsius and fahrenheit
    
    
    float celsius,fahrenheit;

    printf("The temperature Celsius :");
    scanf("%f",&celsius);

    fahrenheit=(9.0/5.0)*celsius + 32;

    printf("\nfahrenheit :%.1f",fahrenheit);


    return 0;
    
}
