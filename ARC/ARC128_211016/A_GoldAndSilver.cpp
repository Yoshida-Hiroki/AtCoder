#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<long long> A(N);
  for(int i = 0; i < N ; i++){
    cin >> A[i];
  }

  bool X = 0;
  for(int i = 0 ; i < N-1 ; i++ ){
    if(X == 0){
      if(A[i]<=A[i+1]){
        cout << 0 ;
      }
      else{
        cout << 1 ;
        X = 1;
      }
    }
    else{
      if(A[i]>=A[i+1]){
        cout << 0 ;
      }
      else{
        cout << 1 ;
        X = 0;
      }
    }
  }
  cout << 1 <<endl;
}
