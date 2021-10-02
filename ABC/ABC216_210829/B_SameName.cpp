#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<string> S(N),T(N);
  for(int i = 0; i < N ; i++){
    cin >> S.at(i) >> T.at(i);
  }

  for(int i = 0; i < N ; i++){
    for(int j = i+1; j < N; j++){
      if(S.at(i)==S.at(j)){
        if(T.at(i)==T.at(j)){
          goto OUT;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
OUT:
  cout << "Yes" << endl;
}
