#include <iostream>
#include <print>
#include <vector>
#include <cmath>

using namespace std;

bool prime(int factor){
  if(factor <= 2){
    return false;
  }

  for(int z = 2; z < factor; z++){
    if(factor % z == 0){
      return false;
    }
  }
  return true;
}

int main(){
  long number {600851475143}, i {1};
  short j {1};
  int primeFactor {1};
  vector<int> factors;

  for(i ;i < sqrt(number) ;i++ ){
    if(number % i == 0){
      factors.push_back(i);
    }
  }

  for(int num : factors){
    println("{}",num);
    if(prime(num)){
      primeFactor = num;
    }
  }

  println("{}",primeFactor);

  return 0;
}
