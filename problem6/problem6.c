#include <stdio.h>
#include <math.h>

int main(){
  int number = 1, sum = 0;

  while(number <= 100){
    sum = sum + pow(number,2);
    number++;
  }
  printf("%i\n", sum);
}
