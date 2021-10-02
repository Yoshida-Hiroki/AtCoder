#include <bits/stdc++.h>

using namespace std;

int main(){
  int S,T;
  cin >> S >> T;

  double y;
  if (S/3 < pow(T,1.0/3.0)){
    y = S/3;
  }
  else{
    y = round(pow(T,1.0/3.0));
  }

  cout << pow(y,3.0)+1+(y+1)*3 << endl;

}
