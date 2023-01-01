#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int newn = 0;
  newn = (1+1)*2;
  for(int i = 0; i<n-1; i++){
    newn = (newn+1)*2;
  }
  cout<<newn;
}