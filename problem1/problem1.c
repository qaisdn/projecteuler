#include <stdio.h>

int main(){
  int sum = 0, number = 1;

  while (number < 1000){
    if ((number % 3 == 0) || (number % 5 == 0)){
      sum = sum + number;
    }
    ++number;
  }
  printf("%i\n", sum);
  return 0;
}
