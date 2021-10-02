#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  if(N%2==0){
    cout << -1 << endl;
    return 0;
  }
  string S;
  cin >> S;

  for(int i = 0 ; i < N/2 ; i++){
    if(S.at(i)=='b' && S.at(N-i-1)== 'b'){
      continue;
    }
    else if(S.at(i) == 'c' && S.at(N-i-1) == 'a'){
      continue;
    }
    else if(S.at(i) == 'a' && S.at(N-i-1) == 'c'){
      continue;
    }
    else{
      cout << -1 << endl;
      return 0;
    }
  }
  cout << N/2 << endl;
}
