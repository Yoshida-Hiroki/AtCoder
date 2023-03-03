// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  ll A,B,C,D;
  cin >> A >> B >> C >> D;
  
  if(A*B >= C*D){
    cout << A*B;
  }
  else{
    cout << C*D;
  }
}
