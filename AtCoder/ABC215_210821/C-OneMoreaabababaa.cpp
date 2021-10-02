#include <bits/stdc++.h>

using namespace std;

int swap(string a, string b){
  string temp;
  temp = a;
  a = b;
  b = temp;
  return 0;
}

int fact(int i){
  int ret = 1;
  while (i>1){
    ret *= i--;
  }
  return ret;
}

int main(){
  string s;
  int K;
  cin >> s >> K;

  int N ;
  N = s.size();

  for(int i = 0; i < N-1; i++){
    for(int j = 0 ; j < N-1; j++){
      if(s[j] > s[j+1]){
        swap(s[j],s[j+1]);
      }
    }
  }

  vector<int> num(N);
  for (int i = 0; i < N; i++){
    num[i] = i+1;
    cout << num[i] << endl;
  }

  vector<int> ans(N,0);
  int M;
  for (int i = 8; 0 < i ; i--){
    M = K/fact(i);
    if(M!=0){
      ans.push_back(num[M]);
      num.erase(num.begin()+M);
      for(int i =0;i<N;i++){
        cout << num.at(i) << endl;
      }
    }
    K = K - M*fact(i);
  }

  // cout << N << endl;
}
