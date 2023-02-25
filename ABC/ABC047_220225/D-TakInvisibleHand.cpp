// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  ll N,T,A_min=1000000001,B=0;
  cin >> N >> T;
  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
    A_min = min(A_min,A[i]);
    B = max(B,A[i]-A_min);
  }

  A_min=A[0];
  ll ans = 0;
  for(int i=0;i<N;i++){
    A_min = min(A_min,A[i]);
    if(A[i]-A_min == B){
      ans += 1;
    }
  }

  cout << ans << endl;

}
