#include <stdio.h>

int main(){


  int num=20;


  if(num<10){
    goto small;
  }else {
    goto big;
  }


  small:
  printf("number is smaller than 10");


  big:
  printf("number is greater than 10");

  return 0;


}