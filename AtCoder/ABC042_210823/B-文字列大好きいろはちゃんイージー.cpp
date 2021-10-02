#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,L;
  cin >> N >> L;

  vector<string> S(N);
  for(int i =0;i<N;i++){
    cin >> S.at(i);
  }

  for(int i = 0; i< N; i++){
    for (int j = 0; j < N-1 ; j++){
      for(int k = 0 ; k < L; k++){
        if(S[j][k]>S[j+1][k]){
          string temp;
          temp = S[j];
          S[j] = S[j+1];
          S[j+1] = temp;
          break;
        }
        else if(S[j][k]<S[j+1][k]){
          break;
        }
      }
    }
  }
  for(int i = 0; i < N;i++){
    cout << S[i];
  }
  cout << endl;
}
