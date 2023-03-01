// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  ll N;
  cin >> N;
  vector<long> S(N,0);
  for(ll i=0;i<N;i++){
    ll A;
    cin >> A;
    S[A] += 1;
  }

  ll ans=1;
  if(N%2==0){
    for(ll i=0;i<N;i++){
      if(S[i]%2==0){
        for(int j=0;j<S[i]/2;j++){
          ans *= 2%1000000007;
        }
      }
      else{
        cout << 0 << endl;
        return 0;
      }
    }
  }
  else{
    if(S[0]==1){
      for(ll i=1;i<N;i++){
        if(S[i]%2==0){
          for(int j=0;j<S[i]/2;j++){
            ans *= 2%1000000007;
          }
        }
        else{
          cout << 0 << endl;
          return 0;
        }
      }
    }
    else{
      cout << 0 << endl;
      return 0;
    }
  }

  cout << ans << endl;
  
}
