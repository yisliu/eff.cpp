#include <iostream>
using namespace std;

int n;

long long f(int newn){
  //ensure number of times run
  if(newn==n){
    //return end number
    return 1;
  }
  //recursive formula
  // day count
  //      ↑   extra egg
  //                ↑
  return 2*(f(newn+1)+1);
}

int main() {
  //input
  cin>>n;
  //output
  int newn = f(1);
  cout<<newn;
}