#include <bits/stdc++.h>

using namespace std;

int main(){
  long long N;
  cin >> N;

  if(N<=2){
    for(int i =0 ;i<N;i++){
      cout << "A";
    }
    cout << endl;
  }
else{
  vector<string> S;
  while(N>=1){
      if(N%2==0){
        S.push_back("B");
        N = N / 2;
      }
      else{
        S.push_back("A");
        N = N - 1;
      }
    }
    reverse(S.begin(),S.end());
    for(int i = 0; i < S.size();i++){
      cout << S.at(i);
    }
  }
}
