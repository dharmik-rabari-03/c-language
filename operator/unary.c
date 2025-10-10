
#include <stdio.h>

int main(){

    
    int a=5;

    //pre increment

    printf("\npre increment : %d",++a);

    //pre decrement

    printf("\npre decrement : %d",--a);

    //post increment
   
    printf("\npost increment : %d",a++);
     printf("\nnow value : %d",a);

    //post decrement 
    
    printf("\npost decrement : %d",a--);
    printf("\nnow value : %d",a);
    
    return 0;

}