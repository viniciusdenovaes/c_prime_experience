#include <iostream>

using namespace std;

int main(){
  int i=50;
  int sum = 0;
  while(i<=100){
    sum += i;
    i++;
  }
  cout << "Sum from 50 to 100 is " << sum << endl;
  cout << "by the recipe: " << (150*51)/2 << endl;
  
  return 0;
}
