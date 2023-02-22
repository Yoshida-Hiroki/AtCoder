// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;

int main(){
  // code
  int a,b,c;
  cin >> a >> b >> c;

  if(a==b&&b==c){
    cout << '1' << endl;
  }
  else if(a==b||b==c||c==a){
    cout << '2' << endl;
  }
  else{
    cout << '3' << endl;
  }
}
