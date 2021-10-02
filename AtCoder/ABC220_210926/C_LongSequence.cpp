#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> A(N);
  long long S=0;
  for(int i = 0;i<N;i++){
    cin >> A[i];
    S += A[i];
  }

  long long X;
  cin >> X;

  long long k=0;
  long long sum = 0;
  while(sum < X-S){
    sum += S;
    k += N;
  }

  for(int i = 0;i<N;i++){
    if(sum < X){
      sum += A[i];
      k += 1;
    }
  }
  cout << k << endl;
}
