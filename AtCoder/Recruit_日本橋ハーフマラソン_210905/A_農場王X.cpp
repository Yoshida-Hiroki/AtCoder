#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,M,T;
  cin >> N>>M>>T;
  vector<int> R(M),C(M),S(M),E(M),V(M);
  for(int i=0;i<M;i++){
    cin >>R[i]>>C[i]>>S[i]>>E[i]>>V[i];
  }

  int date = 0;
  cout << R[0] << " " << C[0] << endl;
  while(date < S[0]){
    cout << -1 << endl;
    date++;
  }
  for(int i = 0 ; i<M-1;i++){
    cout << R[i] << " " << C[i] << " " << R[i+1] << " " << C[i+1] << endl;
    date++;
    while(date < S[i+1]){
      cout << -1 << endl;
      date++;
    }
  }
  while(date<T-1){
    cout << -1 << endl;
    date++;
  }
}
