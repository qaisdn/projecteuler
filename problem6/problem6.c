#include <stdio.h>
#include <math.h>

int main(){
  int number = 1, number2 = 1, sumOfSquares = 0, sum = 0, squareOfSum = 0, answer;

  while (number<=100) {
    sumOfSquares += pow(number,2);
    number++;
  }
  printf("Sum of the  squares: %d\n",sumOfSquares);

  while (number2<101){
    sum += number2;
    number2++;
  }
  squareOfSum = sum * sum;

  printf("Square of the sum: %d\n", squareOfSum);

  answer = squareOfSum - sumOfSquares;


  printf("The answer: %d\n",answer);
  
  return 0;
}
