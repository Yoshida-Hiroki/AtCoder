// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int N;
  cin >> N;
  vector<int> T(N),A(N);
  for(int i = 0;i<N;i++){
    cin >> T[i] >> A[i];
  }

  long long t,a;
  long long n;
  t = T[0], a = A[0];
  for(int j=1;j<N;j++){
    n = max(ceil((double) t/T[j]),ceil((double) a/A[j]));
    t = n*T[j];
    a = n*A[j];
  }
  cout << (long long) t+a << endl;
}