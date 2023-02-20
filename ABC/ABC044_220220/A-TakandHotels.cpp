// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;

int main(){
  // code
  long N,K,Y,X;
  cin >> N >> K >> X >> Y;

  if(N>=K){
    cout << K*X+(N-K)*Y;
  }
  else{
    cout << N*X;
  }
}
