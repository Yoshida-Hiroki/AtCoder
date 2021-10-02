#include <bits/stdc++.h>

using namespace std;

int main(){
  long long A1,A2,A3;
  cin >>A1>>A2>>A3;

  long long X;
  X = 2*A2-A1-A3;

  if(X>=0){
    cout << X << endl;
  }
  else{
    if(X%2==0){
      cout << X+3*((-X)/2) << endl;
    }
    else{
      cout << X+3*((-X)/2+1) << endl;
    }
  }
}
