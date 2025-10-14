
#include <stdio.h>

int main(){

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks>=90){
        printf("you achieved A grade.\n");
    }else if(marks>=80){
        printf("you achieved B grade.\n");
    }else if(marks>=70){
        printf("you achieved C grade.\n");  
    }
     else if(marks>=60){
        printf("you achieved D grade.\n");
     }   
     else if(marks>=34){
        printf("you achieved E grade.\n");
     }   
     else{
        printf("you Fail this exam\n");
     }
}