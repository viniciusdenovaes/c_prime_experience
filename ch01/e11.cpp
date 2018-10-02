#include <iostream>

using namespace std;

int main(){
  cout << "Input two numbers" << endl;
  int n1, n2;
  cin >> n1 >> n2;
  int increment;
  if(n1<n2) increment = 1;
  else      increment =-1;
  int var{n1};
  cout << "printing..." << endl;
  while(var!=n2){
    cout << var << endl;
    var += increment;
  }
  cout << n2 << endl;
  return 0;
}
