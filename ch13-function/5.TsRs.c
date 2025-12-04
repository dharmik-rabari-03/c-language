#include <stdio.h>

int square(int a){
    return a*a;
}

int main(){


    int answer1=square(2);   
    printf("Result 1 :%d\n",answer1); 

    int answer2=square(3);   
    printf("Result 2 :%d\n",answer2); 


    int answer3=square(4);   
    printf("Result 3 :%d\n",answer3); 

    int answer4=square(5);   
    printf("Result 4 :%d",answer4); 
    
    return 0;
}