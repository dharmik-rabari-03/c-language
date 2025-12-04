#include <stdio.h>

int main(){

    int num[5]={};

    printf("Enter Your First Element Of Array\n");
    scanf("%d" ,&num[0]);

     printf("Enter Your Second Element Of Array\n");
    scanf("%d" ,&num[1]);


     printf("Enter Your Third Element Of Array\n");
    scanf("%d" ,&num[2]);


     printf("Enter Your Fourth Element Of Array\n");
    scanf("%d" ,&num[3]);

     printf("Enter Your Fifth Element Of Array\n");
    scanf("%d" ,&num[4]);

    printf("Second Element Of Array : %d",num[1]);
    
    
    return 0;

}