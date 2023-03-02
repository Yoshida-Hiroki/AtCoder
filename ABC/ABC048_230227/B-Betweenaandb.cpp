// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long f(long long n, long long x){
  if(n >=0){
    return (long long) n/(long long)x+1;
  }
  else{
    return 0;
  }
}

int main(){
  // code
  ll a,b,x;
  cin >> a >> b >> x;

  cout << f(b,x)-f(a-1,x) << endl;
  // cout << f(b,x) << endl;

}