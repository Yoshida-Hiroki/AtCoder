// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  string S;
  int N;
  cin >> S;
  N = S.length();
  
  ll ans = 0;
  for(int i =0; i< (1<<(N-1));i++){
    ll sum =0;
    ll a = S[0]-'0';
    for(int j = 0; j < N-1;j++){
      if(i & (1<<j)){
        sum += a;
        a = 0;
      }
      a = a*10+S[j+1]-'0';
    }
    sum += a;
    ans += sum;
  }
  cout << ans << endl;
}
