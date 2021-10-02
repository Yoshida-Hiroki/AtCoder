#include <bits/stdc++.h>
#include <atcoder/modint>

using namespace std;
using namespace atcoder;

using mint = modint998244353;

int main(){
  int N,K;
  cin >> N >> K;

  vector<int> C(N,K);
  for(int i =0; i<K;i++){
    string c;
    int k;
    cin >> c >> k;

    if(c=="L"){
      C.at(k-1) = 1;
      for(int j = 0; j < k - 1 ; j++ ){
        if(C.at(j) != 1){
          C.at(j) -= 1;
        }
      }
    }
    else{
      C.at(k-1) = 1;
      for(int j = k-1; j < N; j++){
        if(C.at(j) != 1){
          C.at(j) -=1;
        }
      }
    }
  }

  mint ans = 1;
  for(int i=0;i<N;i++){
    ans *= C.at(i);
  }

  cout << ans.val() << endl;
  return 0;
}
