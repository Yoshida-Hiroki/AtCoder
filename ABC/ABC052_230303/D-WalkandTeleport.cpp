// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  ll N,A,B;
  cin >> N >> A >> B;

  ll x,ans=0;
  cin >> x;
  for(int i=0;i<N-1;i++){
    ll y;
    cin >> y;

    ans += min((y-x)*A,B);
    x = y;
  }
  cout << ans << endl;
}
