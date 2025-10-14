#include <stdio.h>

int main(){

    int age=18;

    int licence=1;

    if(age>=18){
        if(licence==1){
            printf("You can drive a car");
        }
        else{
            printf("you have to apply for driving licence");
        }
    }
    else{
        printf("You cannot drive a car");
    }
}