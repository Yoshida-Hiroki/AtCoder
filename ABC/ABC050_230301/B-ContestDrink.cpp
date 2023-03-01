// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int N,M;
  cin >> N;
  vector<long> T(N);
  ll S=0;
  for(int i=0;i<N;i++){
    cin >> T[i];
    S += T[i];
  }
  cin >> M;

  for(int i =0 ;i<M;i++){
    ll p,x;
    cin >> p >> x;
    cout << S - (T[p-1] - x) << endl;
  }
  
}
