


#include <stdio.h>


int main(){

    int a,b,c;

    printf("enter first number\n");

    scanf("%d",&a);

     printf("enter second number\n");

    scanf("%d",&b);

     printf("enter third number\n");

    scanf("%d",&c);


    printf("a,b,c, values: %d,%d,%d\n",a,b,c);


    if(a>=b){

        if(a>=c){
            printf("a is greater among all");
        }else {
             printf("c is greater among all");
        }
        
    }else if(b>=c){
        printf("b is greater among all");
    }else {
        printf("c is greater among all");
    }





    return 0;
}