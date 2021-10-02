#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;

  vector<vector<long long>> c(T,vector<long long>(3));
  for(int i = 0 ; i < T ; i++){
    cin >> c[i][0] >> c[i][1] >> c[i][2];
  }

  vector<vector<long long>> dp(T,vector<long long>(10,0));

  for(int i=0;i<T;i++){
    for(int l=0;l<T;l++){
      for(int m=0;m<10;m++){
        dp[l][m]=0;
      }
    }
    for(int j=0;j<10;j++){
      dp[0][0]=1;
      for(int k=0;k<c[i][0]+c[i][1]+c[i][2];k++){
        if(k<c[i][0]){
          if(j >= 2){
            dp[i+1][j] += dp[i][j-2];
          }
          else{
            dp[i+1][j] = dp[i][j];
          }
        }
        else if(k<c[i][0]+c[i][1]){
          if(j >= 3){
            dp[i+1][j] += dp[i][j-3];
          }
          else{
            dp[i+1][j] = dp[i][j];
          }
        }
        else{
          if(j >= 4){
            dp[i+1][j] += dp[i][j-4];
          }
          else{
            dp[i+1][j] = dp[i][j];
          }
        }
      }
    }
    cout<< dp[T-1][10-1] <<endl;
  }
}
