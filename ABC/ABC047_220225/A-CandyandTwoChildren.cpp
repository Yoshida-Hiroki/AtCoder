// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int a,b,c;
  cin >> a>>b>>c;

  if(a+b==c||b+c==a||c+a==b){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
