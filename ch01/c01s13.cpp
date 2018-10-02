#include <iostream>

using namespace std;

int main(){
  
  cout << endl << "First: " << endl;
  int sum = 0;
  for(int i=50; i<=100; ++i){
    sum += i;
  }
  cout << "Sum from 50 to 100 is " << sum << endl;
  cout << "by the recipe: " << (150*51)/2 << endl;
  
  cout << endl << "Second: " << endl;
  for(int count=10; count>=0; --count){
    cout << count << endl;
  }
  
  return 0;
}
