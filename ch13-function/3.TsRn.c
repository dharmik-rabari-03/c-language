#include <stdio.h>


void greetingmsg(char msg[]){

         printf("%s\n",msg);   
}


void multiplication(int a,int b){
    printf("%d",a*b);
}




int main(){


    greetingmsg("hello");


    multiplication(20,3);


    return 0;
}