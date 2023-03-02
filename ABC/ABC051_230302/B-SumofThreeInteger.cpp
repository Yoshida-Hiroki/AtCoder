// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int K,S;
  cin >> K >> S;

  ll ans=0;
  for(int i=0;i<K+1;i++){
    for(int j=0;j<K+1;j++){
      int k = S-i-j;
      if(0<=k && k <= K){
        ans += 1;
      }
    }
  }
  
  cout << ans << endl;
}
