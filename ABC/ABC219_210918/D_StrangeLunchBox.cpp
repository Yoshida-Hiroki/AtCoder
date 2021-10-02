#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
  	cin >> N;

	int X,Y;
  	cin >>X>>Y;

  vector<int> A(N),B(N);
  for(int i=0;i<N;i++){
	cin >> A[i]>>B[i];
  }

  vector<vector<vector<int>>> dp(N,vector<vector<int>>(N,vector<int>(N)));
  for(int i =0;i<N;i++){
    for(int j =0;j<N;j++){
      for(int k =0;k<N;k++){
        dp[i][j][k]=100000000;
      }
    }
  }
  dp[0][0][0]=0;
  for(int i =1;i<N;i++){
    for(int j =0;j<N;j++){
      for(int k =0;k<N;k++){
        dp[i][min(j+A.at(i),X)][min(k+B.at(i),Y)] = min(dp[i][min(j+A.at(i),X)][min(k+B.at(i),Y)],dp[i-1][j][k]);
        dp[i][j][k]=min(dp[i][j][k],dp[i-1][j][k]);
      }
    }
  }

  if(dp[N-1][X-1][Y-1]!=100000000){
    cout << dp[N-1][X-1][Y-1] << endl;
  }
  else{
    cout << -1 << endl;
  }
}
