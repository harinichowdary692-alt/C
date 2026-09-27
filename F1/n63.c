#include<stdio.h>

int one_n(int current, int limit);

int main (){
    one_n(1,10);
}

int one_n(int current, int limit){
  if(current > limit){
    return limit;
  }
  printf("%d \n",current);
  one_n(current+1, limit);
}