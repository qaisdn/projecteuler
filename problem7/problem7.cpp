#include <iostream>

using namespace std;

bool prime(int number){
  if(number < 2){
    return false;
  }
  for(int i = 2; i < number;i++){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int counter {0};
  int i {0};
  for(i; i < 100000000000000;++i){
    if(prime(i)){
      counter++;
    }
    if(counter == 10001){
      break;
    }
  }
  cout << i << endl;
  return 0;
}
