// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int N;
  cin >> N;
  string S;
  cin >> S;

  int x=0;
  int ans=0;
  for(int i=0;i<N;i++){
    if(S[i] == 'I'){
      x += 1;
      ans = max(ans,x);
    }
    else{
      x -= 1;
    }
  }
  cout << ans << endl;
  
}
