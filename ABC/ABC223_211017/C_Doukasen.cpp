#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<float> A(N),B(N);
  for(int i = 0;i<N;i++){
    cin >> A[i] >> B[i];
  }

  float sum = 0;
  vector<float> C(N);
  for(int i = 0;i<N;i++){
    C[i] = A[i]/B[i];
    sum += C[i];
  }
  float t_mid = sum/2;
  float C_sum=0.0,A_sum=0.0;
  for(int i = 0; i < N ; i ++){
    if(C_sum<t_mid){
      C_sum += C[i];
      A_sum += A[i];
      cout << A_sum << endl;
    }
    else{
      C_sum -= C[i-1];
      A_sum -= A[i-1];
      A_sum += (t_mid-C_sum)/B[i];
      break;
    }
  }
  cout << A_sum << endl;
}
