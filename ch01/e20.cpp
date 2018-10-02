#include<iostream>
#include "material/Sales_item.h"

using namespace std;

int main(){
  Sales_item salesItem;
  while(cin >> salesItem)
    cout << salesItem << endl;
  return 0;
}
