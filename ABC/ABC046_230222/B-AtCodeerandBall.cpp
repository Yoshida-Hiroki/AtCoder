// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;

int main(){
  // code
  int N,K;
  cin >> N >> K;

  long long ans=K;
  for(int i =0;i<N-1;i++){
    ans *= K-1;
  }
  cout << ans << endl;
}
