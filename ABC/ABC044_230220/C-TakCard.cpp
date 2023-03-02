// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int N,A;
  int x[50];
  cin >> N >> A;
  for(int i = 0; i < N; i++){
    cin >> x[i];
  }

  ll dp[51][51][3500];
  ll ans = 0;

  dp[0][0][0] = 1;
  for(int i =0;i<N;i++){
    for(int j =0;j<N;j++){
      for(int k = 0;k<2500;k++){
        if(dp[i][j][k]){
          dp[i+1][j][k] += dp[i][j][k];
          dp[i+1][j+1][k+x[i]] += dp[i][j][k];
        }
      }
    }  
  }

  for(int i =1;i<N+1;i++){
    ans += dp[N][i][i*A];
  }
  cout << ans << endl;
}
