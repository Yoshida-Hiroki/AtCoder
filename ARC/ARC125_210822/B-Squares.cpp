#include <bits/stdc++.h>

using namespace std;

int main(){
  int mod = 998244353;
  long long N;
  cin >> N;

  int m = 0;
  long long ans=0;
  while(m<=pow(N,0.7)){
    ans = (int)(ans+(double)(-m+sqrt(pow(m,2.0)+N)))% mod;
    m++;
  }
  cout << ans << endl;
}
