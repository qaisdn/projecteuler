#include <print>

using namespace std;

bool divisible20(int number){
  for(int i = 1; i <= 20; i++){
    if(number % i != 0){
      return false;
    }
    else if(number % i == 0){
    }
  }
  return true;
}

int main(){
  int i {1}, ans {1};

  do{
    ans++;
  }
  while(divisible20(ans) == false);

  println("{}",ans);

  return 0;

}
