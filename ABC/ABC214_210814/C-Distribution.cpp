#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<long long> S(N);
  vector<long long> T(N);

  for(int i =0; i<N; i++){
    cin >> S.at(i);
  }
  for(int i =0; i<N; i++){
    cin >> T.at(i);
  }

  for(int j = 0 ; j < 5 ; j++){
    for(int i = 0 ; i < N - 1 ; i++){
      if(T.at(i) + S.at(i) < T.at(i+1)){
        T.at(i+1) = T.at(i) + S.at(i);
      }
    }
    if(T.at(N-1) + S.at(N-1) < T.at(0)){
      T.at(0) = T.at(N-1) + S.at(N-1);
    }
  }

  for(int i = 0 ; i < N ; i++){
    cout << T.at(i) << endl;
  }
}
