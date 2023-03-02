// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  ll N,x;
  cin >> N >> x;
  vector<long> a(N);
  for(int i=0;i<N;i++){
    cin >> a[i];
  }

  vector<long> s(N);
  long long ans = 0;
  for(int i=0;i<N-1;i++){
    s[i] = a[i]+a[i+1];
    while(s[i]>x){
      if(a[i+1]>0){
        a[i+1] -= 1;
      }
      else{
        a[i] -= 1;
      }
      s[i] -= 1;
      ans += 1;
    }
  }

  cout << ans << endl;
}
