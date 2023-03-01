// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  ll A,B;
  string op;
  cin >> A >> op >> B;

  if(op == "+"){
    cout << A+B << endl;
  }
  else{
    cout << A-B << endl;
  }
}
