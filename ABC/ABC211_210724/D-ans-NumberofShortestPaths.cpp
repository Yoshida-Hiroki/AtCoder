#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(){
  int N,M;
  cin >> N >> M;

  vector<vector<int>> to(N);
  for(int i = 0;i<M;i++){
    int a,b;
    cin >> a >> b;
    --a;
    --b;
    to[a].push_back({b});
    to[b].push_back(a);
  }

  const int INF = 1001001001;
  vector<int> dist(N,INF);
  queue<int> que;

  dist[0]=0;
  que.push(0);
  vector<int> vs;
  while(que.size()!=0){
    int v = que.front();
    que.pop();
    vs.push_back(v);
    for(int nv : to[v]){
      if (dist[nv] != INF) continue;

      dist[nv] = dist[v]+1;
      que.push(nv);
    }
  }

  int mod = 1000000007;

  vector<int> dp(N);
  dp[0] = 1;
  for(int v:vs){
    for(int u: to[v]){
      if (dist[u]==dist[v]+1){
        dp[u] += dp[v]%mod;
      }
    }
  }

  cout << dp[N-1]%mod << endl;
}
