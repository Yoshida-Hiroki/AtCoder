#include <bits/stdc++.h>

using namespace std;

int main(){
  double A,B;
  cin >> A >> B;

  if(A>0&&B==0){
    cout << "Gold" << endl;
  }
  else if(A==0&&B>0){
    cout << "Silver" << endl;
  }
  else{
    cout << "Alloy" << endl;
  }
}
