#include <iostream>

using namespace std;

int main(){
  
  int currentValue{0}, value{0};
  
  if(cin >> currentValue){
    int count{1};
    while(cin >> value){
      if(value == currentValue){
        count++;
      }
      else {
        cout << currentValue << " appears " 
             << count << " times in sequence" << endl;
        currentValue = value;
        count = 1;
      }
    }
    cout << currentValue << " appears " 
          << count << " times in sequence" << endl;
  }
  
  return 0;
}
